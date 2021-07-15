#include <stdio.h>

int main(void)
{
	printf("\n\n		Bing's Review Practice of C\n\n	");
	int question1 = 0;
	printf("\nQuestion--1 What statement do you start with a C program?\n	1. A definition of function\n	2. A statement of the library\n	3. Import the system module\n");
	scanf("%d", &question1);
	if (question1 == 2)
		printf("Correct!\n");
	else
		printf("Sorry, the correct answer is 2\n");
	return 0;
}
