# bayonetta_patch
A patching infrastructure for bayonetta.

## install

```sudo apt install gcc-multilib bsdiff python-pip
pip install setuptools --upgrade
pip install lief
pip install pyyaml
git clone https://github.com/Kerilk/bayonetta_patch.git
cp "PATH_TO_BAYONETTA.exe" bayonetta_patch/
cd bayonetta_patch
make
cp out/Bayonetta.exe "PATH_TO_BAYONETTA.exe"
```
