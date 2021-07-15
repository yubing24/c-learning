#include <stdio.h>

int inc1(int x) {
	return ++x;
}

int inc2(int *x) {
	return ++(*x);
}

int main(void) {
	int a = 3;
	printf("Inc1: %d\n", inc1(a) + a);
	printf("Inc2: %d\n", inc2(&a) + a);
	return 0;
}
