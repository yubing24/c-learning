int factorial(int n) {
	if (n <= 0) return 0;
	else {
		int product;
		product = 1;
		for (n; n >= 1; n--) {
			product  *= n;
		}
		return product;
	}
}

int power(int base, int index) {
	if (index = 0) return 1;
	else if (index > 0) {
		int total = 0;
		int step;
		for (step = 0; step <= index; step++) {
			total *= base;
		}
		return total;
	}
	else {
		return 0;
	}
}

