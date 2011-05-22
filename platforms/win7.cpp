#include <stdlib.h>

char* getCurrentPath() {
	char* pPath;
	pPath = getenv("PATH");
	return pPath;
}