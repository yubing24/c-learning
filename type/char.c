#include <stdio.h>

void int_to_char () {
	puts("<Convert integer to character>");
	int i = 0;
	for (i = 0; i < 255; i++) {
		printf(" %d = %c ", i, i);
	}
}

void char_to_int () {
	puts("<Convert character to integer>");
	char c = (char) 0;
	int i = 0;

	for (i = 0; i < 255; i++) {
		printf (" %c = %d ", c, (int) c);
		c++;
	}
}

int main (void) {
	int_to_char ();
	char_to_int ();
	return 0;
}