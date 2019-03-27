.PHONY: all

all:
	$(MAKE) -C src
	bspatch Bayonetta.exe out/Bayonetta.exe Bayonetta.diff
	python inject_code.py
	python link.py

patch: all
	bsdiff Bayonetta.exe out/Bayonetta.exe out/Bayonetta.`cat VERSION`.diff

clean:
	$(MAKE) -C src clean
	rm out/Bayonetta.exe
