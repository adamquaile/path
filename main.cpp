#include <iostream>
#include <stdio.h>
#include <string>
	using std::string;


// Include the code for the relevant platform, based on flags passed 
// in through compiler. See makefile for compiler commands. 

#if defined(__WIN7__) 
	#include "platforms/win7.cpp"
#endif


void printUsage() {
	
	char* stLiteral = "Treat the directory . as literal - doesn't resolve before adding to PATH";

	printf(\
"\n\
Usage: %s [command [options] filename] \n\
\n\
	Running with no command or filename, shows this help message.\n\
	\n\
	Commands:\n\
	\n\
		add: Adds the given filename to the path.\n\
		remove: Removes the filename from the path, iff it is there\n\
	\n\
	Filename:\n\
	\n\
		add: Adds the given filename to the path.\n\
		remove: Removes the filename from the path, iff it is there\n\
	\n\
	Options:\n\
	\n\
		--literal: %s\
	\n\
"\
, COMMAND_NAME, stLiteral);
}

int main(int argc, char* argv[]) {	
	if (argc < 2) {
			printUsage();
			return 0;
	}
	// Options to be set (and defaults)
	// --literal 
	bool opLiteral = false;
	
	// Get the filename (last argument)
	char filename[40];
	strcpy(filename, argv[argc-1]);

	bool cAdd;
	bool cRemove;
	// Figure out which command was asked for
	if (argv[1] == "add") {
		cAdd = true;
	} else if (argv[1] == "remove") {
		cRemove = true;
	}
	
	if (argc > 2) {
		// We have some extra arguments
		for (int i = 2; i < argc-1; i++) {
			if (argv[i] == "--literal") {
				opLiteral = true;
			}
		}
	}
	
	// Here, we should know everything we need to
	if (cAdd) {
		if (opLiteral) {
			addToPath(filename);
		} else {
			addToPath(resolvePath(filename));
		}
	}
	
	
	char directory[100];
	getCurrentDirectory(directory, sizeof(directory));
	printf("%s", filename);
	
}

