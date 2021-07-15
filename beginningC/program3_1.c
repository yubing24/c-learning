// Program 3.1 A simple example of the if statement
#include<stdio.h>

int main (void)
{
	int number = 0;
	printf("\nEnter an integer between 1 and 10:");
	scanf("%d", &number);
	
	if (number < 5)
		printf("\n\tYou entered %d which is smaller than 5.\n\n", number);
	if (number >=5)
		printf("\n\tYou entered %d which is not smaller than 5.\n\n", number);
	
	return 0;
}
