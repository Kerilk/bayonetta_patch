
//TODO write a description for this script
//@author 
//@category Bayonetta
//@keybinding 
//@menupath 
//@toolbar 

import ghidra.app.plugin.core.datamgr.archive.SourceArchive;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.util.*;
import ghidra.program.model.reloc.*;
import ghidra.program.model.data.*;
import ghidra.program.model.data.Enum;
import ghidra.program.model.block.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.scalar.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.lang.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.address.*;

import java.io.File;
import java.util.*;

public class exportBayonettaDataTypes extends GhidraScript {

	private void addType(ArrayList<DataType> allDataTypes, DataType type) {
		if (!allDataTypes.contains(type)) {
			if (!(type instanceof Array) && !(type instanceof Pointer) && !(type instanceof BuiltInDataType)) {
				allDataTypes.add(type);
			}
			if (type instanceof TypeDef) {
				addType(allDataTypes, ((TypeDef) type).getBaseDataType());
				addType(allDataTypes, ((TypeDef) type).getDataType());
			} else if (type instanceof Pointer) {
				addType(allDataTypes, ((Pointer) type).getDataType());
			} else if (type instanceof Array) {
				addType(allDataTypes, ((Array) type).getDataType());
			} else if (type instanceof Composite) {
				for (DataTypeComponent comp : ((Composite) type).getComponents()) {
					addType(allDataTypes, comp.getDataType());
				}
			} else if (type instanceof FunctionDefinition) {
				FunctionDefinition f = (FunctionDefinition) type;
				addType(allDataTypes, f.getReturnType());
				for (ParameterDefinition arg : f.getArguments()) {
					addType(allDataTypes, arg.getDataType());
				}
			}
		}
	}

	private ArrayList<DataType> getAllReferencedDataTypes(List<DataType> dataTypeList) {
		ArrayList<DataType> allDataTypes = new ArrayList<DataType>();

		for (DataType d : dataTypeList) {
			addType(allDataTypes, d);
		}

		return allDataTypes;

	}

	private String fullName(DataType type) {
		String name = "";
		if (type instanceof Composite) {
			if (type instanceof Structure) {
				name += "struct ";
			} else if (type instanceof Union) {
				name += "union ";
			}
		}
		name += type.getName();
		return name;
	}

	private String declareArrayComp(Array arr, String name) {
		String declaration = "";
		String dimension = "";
		dimension += "[" + arr.getNumElements() + "]";
		DataType d = arr.getDataType();
		while (d instanceof Array) {
			Array arr2 = (Array) d;
			dimension += "[" + arr2.getNumElements() + "]";
			d = arr2.getDataType();
		}
		declaration += d.getName();
		declaration += " " + name;
		declaration += dimension;
		return declaration;
	}

	private String declarePointerComp(Pointer ptr, String name) {
		String declaration = "";
		if (ptr.getDataType() == null) {
			declaration += "void";
		} else {
			declaration += ptr.getDataType().getName().toString();
		}
		declaration += " *" + name;
		return declaration;
	}

	private String declaration(DataTypeComponent comp) {
		String declaration = "";

		String compName = "";
		if (comp.getFieldName() != null) {
			compName += comp.getFieldName();
		} else {
			compName += comp.getDefaultFieldName();
		}
		DataType ct = comp.getDataType();
		declaration += "\t";
		if (ct instanceof Array) {
			declaration += declareArrayComp((Array) ct, compName);
		} else if (ct instanceof Pointer) {
			declaration += declarePointerComp((Pointer) ct, compName);
		} else if (ct instanceof Composite) {
			declaration += fullName(ct);
			declaration += " " + compName;
		} else {

			if (ct.getName().contentEquals("string")) {
				declaration += "char";
				declaration += " " + compName + "[" + comp.getLength() + "]";
			} else {
				declaration += ct.getName();
				declaration += " " + compName;
			}

		}
		declaration += ";\n";
		return declaration;
	}

	private ArrayList<DataType> orderElements(ArrayList<DataType> list) {
		ArrayList<DataType> dataTypeList = new ArrayList<DataType>();
		while (!list.isEmpty()) {
			DataType t = list.remove(0);
			boolean needed = false;
			for (DataType ot : list) {
				if (ot instanceof Composite) {
					for (DataTypeComponent comp : ((Composite) ot).getComponents()) {
						DataType compDataType = comp.getDataType();
						if (compDataType instanceof Array) {
							if (((Array) compDataType).getDataType().equals(t)) {
								needed = true;
							}
						} else {
							if (compDataType.equals(t)) {
								needed = true;
							}
						}
						if (needed) {
							break;
						}
					}
					if (needed) {
						break;
					}
				} else if (ot.dependsOn(t)) {
					needed = true;
					break;
				}
			}
			if (needed) {
				list.add(t);
			} else {
				dataTypeList.add(0, t);
			}
		}
		return dataTypeList;
	}

	public void run() throws Exception {
		Program p = getCurrentProgram();
		DataTypeManager dtm = p.getDataTypeManager();
		CategoryPath bayoPath = new CategoryPath("/bayonetta.h");
		CategoryPath d3d9Path = new CategoryPath("/d3d9.h");
		Category bayonetta_cat = dtm.getCategory(bayoPath);
		Category d3d9_category = dtm.getCategory(d3d9Path);
		DataType[] data_types_arr = bayonetta_cat.getDataTypes();

		List<DataType> data_types = new ArrayList<DataType>();

		for (DataType d : data_types_arr) {
			data_types.add(d);
		}
		data_types_arr = d3d9_category.getDataTypes();
		for (DataType d : data_types_arr) {
			data_types.add(d);
		}
		Function function = getFirstFunction();
		while (true) {

			if (monitor.isCancelled()) {
				break;
			}

			if (function == null) {
				break;
			}
			if (function.getSignatureSource() == SourceType.USER_DEFINED && !function.getName().startsWith("j_")
					&& !function.getName().startsWith("nullsub") && !function.getName().startsWith("FUN_")
					&& (!function.isThunk() || function.getThunkedFunction(false).isExternal())
					&& function.getEntryPoint().getOffset() < 0x05DB8000) {
				data_types.add(function.getReturnType());
				Parameter[] parameters = function.getParameters();
				for (Parameter param : parameters) {
					data_types.add(param.getDataType());
				}
			}
			function = getFunctionAfter(function);
		}

		SourceArchive winArchive = dtm.getSourceArchives().get(0);
		List<DataType> win_data_types = dtm.getDataTypes(winArchive);

		String res = "";
		res += "typedef uint8_t undefined;\n";
		res += "typedef uint8_t uchar;\n";
		res += "typedef uint16_t word;\n";
		res += "typedef uint16_t ushort;\n";
		res += "typedef uint16_t undefined2;\n";
		res += "typedef uint32_t uint;\n";
		res += "typedef uint32_t undefined4;\n";
		res += "typedef uint32_t dword;\n";
		res += "typedef uint64_t ulonglong;\n";
		res += "typedef uint64_t undefined8;\n";

		ArrayList<DataType> dataTypeList = getAllReferencedDataTypes(data_types);
		List<DataType> toRemove = new ArrayList<DataType>();
		while (dataTypeList.remove(null))
			;
		for (DataType d : dataTypeList) {
			if (win_data_types.contains(d)) {
				toRemove.add(d);
			}
		}
		for (DataType d : toRemove) {
			while (dataTypeList.remove(d))
				;
		}

		File file = askFile("target file", "Select");
		java.io.FileWriter fw = new java.io.FileWriter(file, false);
		/*
		 * Collections.sort(dataTypeList, new Comparator<DataType>() { public int
		 * compare(DataType t1, DataType t2) { return
		 * t1.getName().toString().compareTo(t2.getName().toString()); } });
		 */
		// Collections.reverse(dataTypeList);
		dataTypeList = orderElements(dataTypeList);
		for (DataType d : dataTypeList) {
			if (d instanceof Composite) {
				String substring = "" + fullName(d) + ";\n";
				substring += "typedef " + fullName(d) + " " + d.getName() + ";\n\n";
				res += substring;
			}
		}
		for (DataType d : dataTypeList) {
			if (d instanceof Enum) {
				long[] vals = ((Enum) d).getValues();
				String substring = "typedef enum {\n";
				for (long v : vals) {
					substring += "\t" + ((Enum) d).getName(v) + "\t = " + v + ",\n";
				}
				substring += "} " + d.toString() + ";\n\n";
				res += substring;
			}
		}
		for (DataType d : dataTypeList) {
			if (d instanceof TypeDef) {
				String substring = "typedef " + ((TypeDef) d).getDataType().getName() + " " + d.getName() + ";\n\n";
				res += substring;
			}
		}
		/*
		 * for (DataType d : dataTypeList) { if (d instanceof Composite) { String
		 * substring = "typedef " + fullName(d) + " " + d.getName() + ";\n\n"; res +=
		 * substring; } }
		 */
		for (DataType d : dataTypeList) {
			if (d instanceof FunctionDefinition) {
				FunctionDefinition fd = (FunctionDefinition) d;
				String substring = "typedef\n" + fd.getGenericCallingConvention() + "\n" + fd.getPrototypeString()
						+ ";\n\n";
				res += substring;
			}
		}
		for (DataType d : dataTypeList) {
			if (d instanceof Composite) {
				String substring = "" + fullName(d) + " {\n";
				for (DataTypeComponent comp : ((Composite) d).getComponents()) {
					substring += declaration(comp);
				}
				substring += "};\n\n";
				res += substring;
			}
		}

		fw.write(res);
		fw.close();
	}

}
