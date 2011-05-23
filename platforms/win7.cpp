#include <stdlib.h>
	
char* getCurrentPATH() {
	char* pPath;
	pPath = getenv("PATH");
	return pPath;
}

// char* resolvePath(char* path) {
// 	size_t = 100;
// 	
// }

void getCurrentDirectory(char *directory, size_t size) {
    getcwd(directory, size);
}

// void addToPath(char *path) {
// 	
// }
// void resolvePath(char *path) {
// 	
// }

