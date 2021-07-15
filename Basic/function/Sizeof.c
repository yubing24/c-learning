#include <stdio.h>


void get_int_size() {

	puts("\n[===== Integer Size =====]");
	int n = 1;
	int foo [] = {1,2,3};
	
	printf("\tSize of single integer variable is [%d]\n", sizeof(n));
	printf("\tSize of single integer array(3) is [%d]\n", sizeof(foo));
	int size = sizeof(foo)/sizeof(foo[0]);
	printf("\tNumber of elements in array(3) is [%d]\n", size);
}

int main(int argc, char *argv [] ) {

	get_int_size();
	return 0;
}
