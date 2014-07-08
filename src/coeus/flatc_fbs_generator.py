#Author By AngryPowman
#Copyright 2014 Coeus

import os
import glob

FBS_COMPILER = os.path.abspath("./tools/flatc.exe")
FBS_PATH = "./fbs/*.fbs"
FBS_CXX_OUTPUT = "./protocol/"
FBS_FILES = ''

def search(path) :
	global FBS_FILES
	for filename in glob.glob(path):
		if os.path.isdir(filename):
			search(filename)
		else:
			base_file_name = os.path.basename(filename)
			FBS_FILES += filename + ' '
			print filename
			

if __name__ == '__main__':
	#search files
	search(FBS_PATH)
	#compile
	print "FBS Environment :"
	print "		>> FBS_COMPILER : " + FBS_COMPILER
	print "		>> FBS_PATH : " + FBS_PATH
	print "		>> FBS_CXX_OUTPUT : " + FBS_CXX_OUTPUT
	print "		>> FBS_FILES : " + FBS_FILES
	
	result = os.system(FBS_COMPILER + " -o " +FBS_CXX_OUTPUT + " -c " + FBS_FILES)
	if result == 0:
		print "Compiled Okay!"
	else:
		print "Failed to compile, errorcode = " + result