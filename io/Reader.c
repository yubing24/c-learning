/**
 * Practice command-line IO using C
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void method01() {
	puts("<Method 01>");
	char *input = (char *) malloc(sizeof(char));
	printf("Enter something here: ");
	fgets(input, sizeof(input), stdin);
	
	char *cp;
	cp = input;
	while (cp != '\0') {
		printf("%c", *cp);
		cp = cp + 1;
	}
	
	printf("You entered: %s\n", input);
	free(input);
}

void method02() {
	char in [80];
	printf("Enter something here: ");
	scanf("%s", in);
	printf("You entered: %s\n", in);
}

int main() {
	method02();
	return 0;
}
