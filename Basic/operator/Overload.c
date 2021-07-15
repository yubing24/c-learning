#include <stdio.h>

void mist(int n) {
	puts("<Function of mist() with argument 'int'>");
}

/**
 * This program will not compile if this part is added.
 * C does NOT support operator overloading or overriding.
 *
void mist(char n) {
	puts("<Function of mist() with argument 'char'>");
}
 *
 */

int main(void) {
	mist(2);
	mist('2');
	return 0;
}
