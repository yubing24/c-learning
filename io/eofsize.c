#include <stdio.h>

int main (void) {
	int i = 1;
	i = i + EOF;
	printf("%d\n", i);
	printf("EOF = %d\n", EOF);
	return 0;
}