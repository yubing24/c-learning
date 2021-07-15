// Program 2.16 Using typechar 
#include <stdio.h>

int main (void)
{
	char first = 'A';
	char second = 'B';
	char last = 'Z';
	
	char number = 40;
	
	char ex1 = first + 2;
	char ex2 = second + 2;
	char ex3 = last + 1;
	char ex4 = last + 2;
	char ex5 = last + 3;
	char ex6 = last + 4;

	printf("\nThe converting of characters are like this:\n\t A + 2 = %c.\n\t B + 2 = %c.\n\t Z + 1 = %c.\n\t Z + 2 = %c.\n\t Z + 3 = %c.\n\t Z + 4 = %c\n", ex1, ex2, ex3, ex4, ex5, ex6);

	return 0;
}

//This program demonstrates how ASCII characters are compiled in C language.
