NASM = nasm
QEMUDIR = /mnt/d/Program Files/QEMU/

all: makedata kernel

makedata: Data/Makefile
	make -C ./Data

kernel: Source/decompress.asm Source/kernel.asm
	nasm -o disk.img Source/kernel.asm

test: disk.img
	$(QEMUDIR)/qemu-system-i386 -s -soundhw pcspk -fda disk.img
	
clean: Data/Makefile disk.img
	make -C ./Data clean
	rm disk.img