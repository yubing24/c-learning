#include <stdio.h>

int main (void) {
	int cont;
	cont = getchar();
	while (cont != EOF) {
		putchar(cont);
		cont = getchar();
	}
	return 0;
}