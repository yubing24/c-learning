#include <stdio.h>
#include <stdlib.h>
/**
 * Recursively find the factorial of n
 */
unsigned long long int factorial (unsigned long long int n) {
	if (n == 0) return 1;
	else return n * factorial (n - 1);
}

/**
 * Recursively find the nth Fibonacci number
 */
unsigned long long int fibonacci (unsigned long long int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	else return fibonacci (n - 1) + fibonacci (n - 2);
}

int succ (x) {
	return ++x;
}

unsigned long long int add (unsigned long long int a, unsigned long long int b) {
	if (b == 1) return succ (a);
	else {
		return succ( add (a, b - 1) );
	}
}

unsigned long long int product (unsigned long long int a, unsigned long long int b) {
	if (b == 1) return a;
	else return a + product (a, b - 1);
}

void chain1();
void chain2();
void chain3();
void chain4();

void chain1 () {
	puts("Recursive chain #1");
	chain2 ();
}

void chain2 () {
	puts("Recursive chain #2");
	chain3 ();
}

void chain3 () {
	puts("Recursive chain #3");
	chain4 ();
}

void chain4 () {
	puts("Recursive chain #4");
	chain1 ();
}

/**
 * Test function
 */
void test() {
	int v = 0;
	unsigned long long int c;
	unsigned long long int b;
	unsigned long long int m;
	unsigned long long int a;
	
	printf("Enter N: ");
	scanf("%d", &v);
	
	c = factorial (v);
	b = fibonacci (v);
	m = product (c, b);
	a = add(c, b);
	
	printf ("\tFactorial (%d) = %llu\n", v, c);
	printf ("\tFibonacci (%d) = %llu\n", v, b);
	printf ("\tSum (%llu, %llu) = %llu\n", c, b, a);
	printf ("\tProduct (%llu, %llu) = %llu\n", c, b, m); 
	
	chain1();
	
}

/**
 * Execute program
 */
int main (void) {
	test ();
	return 0;
}
