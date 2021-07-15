// Program 3.4 Converting uppercase to lowercase
#include<stdio.h>

int main (void)
{
	char letter = 0;
	// Note: This define a character variable called letter, just like a string variable
	
	printf("Enter an uppercase letter:");
	scanf("%c", &letter);
	// Note: when read letter input, use %c
	
	if (letter >='A')
	// Note: must use 'A' rather than just A, A will be considered as a variable name or other stuff
	// In another word, operation on letter must have '' around letter
		if (letter <='Z')
		{
			letter = letter - 'A' + 'a';
			printf("\nYou entered an uppercase %c.\n", letter);
		}
		else 
		printf("\nTry using the shift key! I want a capital letter.\n");
	
	// My Extention of Program 3.4
	char word = 0;
	printf("\nPut any word contains 8 characters here:\n");
	scanf ("%c", &word);
	if (word != 'AAAAAAAA')
	// Note: error here--Character variable seems not to allow input more than one character.	
	printf("\nThe word you input is %c, right?", word);

	return 0;
}
