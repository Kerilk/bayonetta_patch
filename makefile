.PHONY: all

all:
	$(MAKE) -C src
	bspatch Bayonetta.exe out/Bayonetta.exe Bayonetta.diff
	python inject_code.py
	python link.py

clean:
	$(MAKE) -C src clean
	rm out/Bayonetta.exe
