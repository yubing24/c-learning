/**
 * Declare a function in an old-fashioned way: declare parameters inside func
 */

#include <stdio.h>

void func(a, b)
int a;
int b;
{
	printf("var[1] = %d.\n", a);
	printf("var[1] = %d.\n", b);
}

int main() {
	func(1,2);
	return 0;
}
