#include <stdio.h>

void practice() {
	int *ptr;
	ptr = (int *) malloc( sizeof( int) );
	
	printf("Value of ptr: [%d]\n", ptr);
	printf("Address of ptr: [%d]\n", &ptr);
	
	free(ptr); // release the memory
}

int main (int argc, char *argv []) {
	practice();
	return 0;
}
