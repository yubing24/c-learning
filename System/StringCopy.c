/**
 * Implement strcpy(char *cpy, char [] ctn)
 */
#include <stdio.h>
#include <string.h>

int main(void) {
	char *mystr = "Hello World!";
	char *cpy;
	strcpy(cpy, *mystr);
	printf("Copy of string is %s\n", cpy);
}
