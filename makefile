.PHONY: all

all:
	$(MAKE) -C src
	bspatch Bayonetta.exe out/Bayonetta.exe Bayonetta.diff
	python inject_code.py

clean:
	$(MAKE) -C src clean
	rm out/Bayonetta.exe
