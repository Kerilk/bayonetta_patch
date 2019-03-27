.PHONY: all

all:
	$(MAKE) -C src
	bspatch Bayonetta.exe out/Bayonetta.exe Bayonetta.diff
	python inject_code.py
	python link.py

patch: all
	bsdiff Bayonetta.exe out/Bayonetta.exe out/Bayonetta.`cat VERSION`.diff
	echo "IF EXIST Bayonetta.bak (" > out/bayo_batch.bat
	echo "  bspatch.exe Bayonetta.bak Bayonetta.exe Bayonetta.`cat VERSION`.diff" >> out/bayo_batch.bat
	echo ") ELSE (" >> out/bayo_batch.bat
	echo "  copy Bayonetta.exe Bayonetta.bak" >> out/bayo_batch.bat
	echo "  bspatch.exe Bayonetta.bak Bayonetta.`cat VERSION`.diff Bayonetta.exe" >> out/bayo_batch.bat
	echo ")" >> out/bayo_batch.bat

clean:
	$(MAKE) -C src clean
	rm out/Bayonetta.exe
