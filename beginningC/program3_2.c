// Progrma 3.2 Using if statements to decide on a discount
#include<stdio.h>

int main (void)
{
	const double unit_price = 3.50;
	int quantity = 0;
	printf("\nEnter the number that you want to buy:");
	scanf("%d", &quantity);
	
	double total = 0.0;
	if (quantity > 10)
		total = quantity * unit_price* 0.95;
	else
		total = quantity * unit_price;
	printf("The total amount you have to pay is $%.2f.\n", total);
	
	return 0;
} 
