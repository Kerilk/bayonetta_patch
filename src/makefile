CC=gcc
CFLAGS=-fno-PIC -static -fno-asynchronous-unwind-tables -O2 -m32 -Wall
LDFLAGS=-m elf_i386 -T linker.ld -static
DEPS=bayonetta_native_types.h bayonetta_generated.h
OBJ=load_pl0012_new.o

all: bayonetta.so

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

bayonetta.so: $(OBJ) linker.ld
	ld $(LDFLAGS) -o $@ $^

.PHONY: clean

clean:
	rm -f *.o *.so
