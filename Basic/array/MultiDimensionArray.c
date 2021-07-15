#include <stdio.h>

void basic() {

	// Test 2-D Array but with variant secondary size:
	char words [3][5] = {"Hello", "World", "Oops"}; // Must be the largest one!
}

void d2_char_array() {
	puts("\n[Start]");
	char *line1 = "Hello World!";
	char *line2 = "I am from the Earth!";
	char *line3 = "Where are you from?";
	
	char *lines [3] = {line1, line2, line3};
	char *line;
	int i;
	for (i = 0; i < 3; i++) {
		line = lines[i];
		puts(line);
	}
	
	int size = sizeof(line1)/sizeof(line1[0]);
	printf("sizeof(*line1) = [%d]\n", sizeof(line1));
	printf("sizeof(line1[0]) = [%d]\n", sizeof(line1[0]));
	line = lines[0];
	for (i = 0; i < size; i++) {
		printf("%c", line[i]);
	}
	puts("\n[End]");
}

/**
 * Array can be used as pointer
 */
void char_array() {
	char mist [] = "Hello World!";
	char *cp = "Another Hello World!";
	
	printf("Array is: [%s]\n", mist);
	printf("Pointer is: [%c]\n", cp);
	
	printf("sizeof(mist) = [%d]\n", sizeof(mist));
	printf("sizeof(mist[0]) = [%d]\n", sizeof(mist[0]));
	printf("sizeof(\"Hello World!\") = [%d]\n", sizeof(mist)/sizeof(mist[0]));
	int size = sizeof(mist)/sizeof(mist[0]);
	int i;
	for (i = 0; i < size; i++) {
		printf("charAt(%d) is [%c]\n", i, mist[i]);
	}
	
	
}

/**
 * Execute program
 */
int main() {
	basic();
	d2_char_array();
	char_array();
	return 0;
}
