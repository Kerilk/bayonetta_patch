
//Iterate over user function that were named by the user. 
//@category Bayonetta

import java.io.File;
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.util.*;
import ghidra.program.model.reloc.*;
import ghidra.program.model.data.*;
import ghidra.program.model.block.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.scalar.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.lang.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.address.*;

public class exportBayonettaFunctions extends GhidraScript {

	private String print_parameters(String substring, Function function) {
		Parameter[] parameters = function.getParameters();
		ArrayList<String> temp = new ArrayList<String>();
		if (parameters.length == 0) {
			substring += "void";

		} else {
			for (Parameter p : parameters) {
				if (p.getDataType() instanceof Pointer) {
					Pointer ptr = (Pointer) p.getDataType();
					if (ptr.getDataType() instanceof FunctionDefinition) {
						FunctionDefinition fd = (FunctionDefinition) ptr.getDataType();
						String funcprt_arg = fd.getPrototypeString();
						funcprt_arg = funcprt_arg.replace(fd.getName() + "(", "(*)(");
						funcprt_arg = "\t" + fd.getGenericCallingConvention().toString() + " " + funcprt_arg;
						temp.add(funcprt_arg);

					} else {
						temp.add("\t" + p.getDataType() + " " + p.getName());
					}
				} else if (p.getDataType() instanceof TypeDef) {
					temp.add("\t" + p.getDataType().getName() + " " + p.getName());
				} else {
					temp.add("\t" + p.getDataType() + " " + p.getName());
				}
			}
			substring += String.join(",\n", temp);
			substring += "\n";
		}
		return substring;
	}

	public void run() throws Exception {

		File file = askFile("target file", "Select");
		java.io.FileWriter fw = new java.io.FileWriter(file, false);
		Function function = getFirstFunction();
		ArrayList<String[]> array = new ArrayList<String[]>();

		while (true) {

			if (monitor.isCancelled()) {
				break;
			}

			if (function == null) {
				break;
			}

			if (function.getSignatureSource() == SourceType.USER_DEFINED && !function.getName().startsWith("j_")
					&& !function.getName().startsWith("nullsub") && !function.getName().startsWith("FUN_")
					&& !function.getName().startsWith("__libm_")
					&& (!function.isThunk() || function.getThunkedFunction(false).isExternal())
					&& function.getEntryPoint().getOffset() < 0x05DB8000) {

				// String substring = function.getPrototypeString(false, true) + " = (void *)0x"
				// + function.getEntryPoint().toString().toUpperCase() + ";\n\n";
				// substring = substring.replace(function.getName()+"(", "(*" +
				// function.getName() + ")(");
				String substring = "static\n" + function.getCallingConventionName() + "\n";
				if (function.getReturnType() instanceof TypeDef) {
					substring += function.getReturnType().getName();
				} else {
					substring += function.getReturnType();
				}

				substring += "\n(*" + function.getName() + ")(\n";
				substring = print_parameters(substring, function);
				substring += ") = (void *)0x" + function.getEntryPoint().toString().toUpperCase() + ";\n\n";
				String[] tuple = { function.getName(), substring };
				array.add(tuple);
			}
			function = getFunctionAfter(function);
		}
		Collections.sort(array, new Comparator<String[]>() {
			public int compare(String[] sa1, String[] sa2) {
				return sa1[0].compareTo(sa2[0]);
			}
		});

		String string = "";
		for (String[] sa : array)
			string = string + sa[1];

		fw.write(string);
		fw.close();
		// monitor.setMessage(string);
		// println(string);

	}

}
