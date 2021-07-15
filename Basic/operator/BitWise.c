/**
 * Practice Using Bitwise Operator in C
 */

void bitAnd() {
	int b1 = 1010101001;
	int b2 = 1010101001;
	int r = b1 & b2;
	printf("Value of compareing b1(%d) and b2(%d) is %d\n", b1, b2, r);
}

int main(void) {
	bitAnd();
	return 0;
}
