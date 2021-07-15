#include <stdio.h>

unsigned long int factorial (int n) {
	if (n == 0) return 1;
	else return n * factorial (n - 1);
}

int main (void) {
	int n = 0;
	unsigned long int v;
	printf("N = ");
	scanf("%d", &n);
	v = factorial (n);
	printf("%lu\n", v);
	return 0;
}
