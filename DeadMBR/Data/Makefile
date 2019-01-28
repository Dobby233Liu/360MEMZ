CC = gcc
PY = python2

all: png2bin compress

png2bin: Image/Dead.png
	$(PY) ./Image/png2bin.py ./Image/Dead.png ./Image/image.bin

compress: Image/image.bin
	$(CC) Compressor/compress.c -o ./compress
	./compress Image/image.bin data.bin
	
clean: Image/image.bin data.bin
	rm Image/image.bin 
	rm data.bin