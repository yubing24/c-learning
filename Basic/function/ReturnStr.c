/**
 * C Programing Practice
 * Return String from a function
 */

#include <stdio.h>
#include <string.h>

/**
 * Concat str A and B and return the value
 */
const char * concat(char * a, char * b) {
	char * A = a;
	char * B = b;
	static char * c;
	strcpy(c, A);
	strcat(c, B);
	return c;
}

int main(void) {
	char * a = "Hello, ";
	char * b = "World!";
	char * c = concat(a, b);
	printf("%s\n", c);
	return 0;
}
