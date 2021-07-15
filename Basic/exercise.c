#include <stdio.h>

/* Exercise 1-7 Solution
 */
void print_eof() {
	printf("\nExercies 1-7. Write a program to print the value of EOF\n");
	printf("\tAs a char EOF is: %c\n", EOF);
	printf("\tAs an integer, EOF is: %d\n", EOF);
}

void count_newline() {
	int input = 0;
	int count = 0;
	printf("\nExercise 1-8-1. Write a program to count newline\n");
	while (input = getchar() != EOF) {
		if (input == '\n') count++;
		printf("\tThere are %d lines so far.\n", count);
	}
}

int main(void) {
	print_eof();
	count_newline();
	return 0;
}


