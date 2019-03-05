import lief

binary = lief.parse("src/bayonetta.so")
segments = binary.segments

f = open("out/Bayonetta.exe", "r+b")
f.seek(0xBE1400)
for c in segments[0].content:
    f.write(chr(c))
f.seek(0x13E1400)
for c in segments[1].content:
    f.write(chr(c))
f.close()
