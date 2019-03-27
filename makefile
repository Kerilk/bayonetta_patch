.PHONY: all

all:
	$(MAKE) -C src
	bspatch Bayonetta.exe out/Bayonetta.exe Bayonetta.diff
	python inject_code.py
	python link.py

bsdiff-v4.3-win-x64.zip:
	wget https://github.com/cnSchwarzer/bsdiff-win/releases/download/v4.3/bsdiff-v4.3-win-x64.zip
	touch $@

patch: all bsdiff-v4.3-win-x64.zip
	bsdiff Bayonetta.exe out/Bayonetta.exe out/Bayonetta.`cat VERSION`.diff
	cp bsdiff-v4.3-win-x64.zip out/bayo_patch.`cat VERSION`.zip
	echo "IF EXIST Bayonetta.bak (" > out/bayo_batch.bat
	echo "  bspatch.exe Bayonetta.bak Bayonetta.exe Bayonetta.`cat VERSION`.diff" >> out/bayo_batch.bat
	echo ") ELSE (" >> out/bayo_batch.bat
	echo "  copy Bayonetta.exe Bayonetta.bak" >> out/bayo_batch.bat
	echo "  bspatch.exe Bayonetta.bak Bayonetta.`cat VERSION`.diff Bayonetta.exe" >> out/bayo_batch.bat
	echo ")" >> out/bayo_batch.bat
	zip -j out/bayo_patch.`cat VERSION`.zip out/bayo_batch.bat out/Bayonetta.`cat VERSION`.diff

clean:
	$(MAKE) -C src clean
	rm -f out/Bayonetta.exe
	rm -f out/*.diff
	rm -f out/*.zip
	rm -f out/*.bat
