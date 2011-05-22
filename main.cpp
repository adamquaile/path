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
"\
, COMMAND_NAME);
}

int main(int argc, const char* argv[]) {

	printUsage();
}
