#include <stdio.h>

int main() {

	long fibA = 0;
	long fibB = 1;
	long FIB;
	int step;
	int n;
	int ret;

	printf("Enter the nth Fibonacci number to compute: ");
	ret = scanf("%d", &n);
	
	if (n == 0) {
		printf("%lu\n", fibA);
	}
	else if (n == 1) {
		printf("%lu\n", fibB);
	}
	else if (n >= 2) {
		step = 1;
		while (step < n) {
			FIB = fibA + fibB;
			fibA = fibB;
			fibB = FIB;
			step++;
		}
		printf("%lu\n", FIB);
	}
	return 0;
}	
