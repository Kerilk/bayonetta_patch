import lief
import yaml
import struct

virtualBaseAddress = 0x401000
textFileOffset = 0x400

binary = lief.parse("src/bayonetta.so")
symbols = binary.symbols

with open("link_map.yaml", "r") as stream:
    data_loaded = yaml.load(stream)

f = open("out/Bayonetta.exe", "r+b")

for s in symbols:
    if data_loaded.get(s.name, False):
        target_address = data_loaded[s.name]
        print(s.name, ":", hex(target_address))
        fileAddress = target_address - virtualBaseAddress + textFileOffset
        f.seek(fileAddress)
        jmpOffset = s.value - ( target_address + 5)
        f.write("\xE9"+struct.pack("<l", jmpOffset))

f.close()
