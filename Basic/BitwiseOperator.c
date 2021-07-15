/**
 * A practice program for exploring the use and effect of bitwise
 * operators, including bitwise AND (&), bitwise inclusive OR(|),
 * bitwise exclusive OR(^), left shift (<<), right shift(>>), and
 * one's component
 */
#include <stdio.h>

void bitwise_and() {
	printf("\n1. bitwise AND: &\n");
	int n = 10;
	printf("\tValue of n is %d.\n", n);
	n = n & 0177;
	printf("\tThe value of n & 0177 is %d.\n", n);
}

void bitwise_inclusive_or() {
	printf("\n2. bitwise inclusive OR: |\n");
	int n = 10;
	printf("\tValue of n is %d.\n", n);
	n = n | 0177;
	printf("\tThe value of n | 0177 is %d.\n", n);
}

void bitwise_exclusive_or() {
	printf("\n3. bitwise exclusive OR: ^\n");
	int n = 10;
	printf("\tValue of n is %d.\n", n);
	n = n ^ 0177;
	printf("\tThe value of n ^ 0177 is %d.\n", n);
}

void left_shift() {
	printf("\n4. left shift: <<\n");
	int n = 10;
	printf("\tValue of n is %d.\n", n);
	n = n << 0177;
	printf("\tThe value of n << 0177 is %d.\n", n);
}

void right_shift() {
	printf("\n5. right shift: >>\n");
	int n = 10;
	printf("\tValue of n is %d.\n", n);
	n = n >> 0177;
	printf("\tThe value of n >> 0177 is %d.\n", n);
}

int main () {
	printf("\nC Lab: Bitwise Operators\n");
	bitwise_and();
	bitwise_inclusive_or();	
	bitwise_exclusive_or();
	left_shift();
	right_shift();
	return 0;
}


