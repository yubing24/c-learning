/** 
 * C Programming Practice
 * String
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char str[20];
	int cursor;
} MyString;

/**
 * Print out a string
 */
void strprt(char str1 [], char * str2) {

	// Print String: Method 1
	printf("%s\n", str1);
	
	// Print String: Method 2
	int i = 0;
	char cp;
	while (cp != '\0') {
		cp = str2[i];
		putchar(cp);
		i = i + 1;
	}
	puts("");
}

/**
 * Copy a string to another string
 */
void strcopy(char * str, char * cpy) {
	puts("1");
	int i = 0;
	cpy = str[0];
	puts("2");
	while (cpy[i] != '\0') {
		printf("%c\n", cpy[i]);
		cpy[i] = str[i];
		i = i + 1;
	}
}

/**
 * Get the length of a string represented as a character pointer
 */
int getlen(char * str) {
	int i = 0;
	char cp;
	cp = str[0];
	while (cp != '\0') {
		i = i + 1;
		cp = str[i];
	}
	return i;
}

int main(void) {
	char * hello1 = "Hello";
	char hello2 [] = "Hello, World!";
	char * cpy = (char *) malloc(sizeof(char));
	
	int len = getlen(hello1);
	printf("%d\n", len);
	
	printf("Actual Length is %d\n", strlen(hello1));
	
	strprt(hello2, hello1);
	
	strcopy(hello1, cpy);
	printf("%s\n", cpy);
	
	return 0;
}
