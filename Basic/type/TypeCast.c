/**
 * Type Casting Exercise
 * This software is free software and is released under the General Public
 * License version 3. This software comes with absolutely NO WARRANTY.
 * If you use any parts of this software, please cite your source.
 * 
 * Author: Yubing Hou
 * Date: Auguest 6, 2014
 * Contact: dancesportstatistics@outlook.com
 */
#include <stdio.h>
#include "Variables.h"

#define INTSIZE 13
#define FLOATSIZE 9
#define DOUBLESIZE 5

int INTS [13] =  {-243, -81, -27, -9, -3, -1, 0, 1, 3, 9, 27, 81, 243};
int *IP;

float FLOATS [9] = {1.999999, 1.0000001, 0.9999999, 0.0000001, 0.0000000 -0.0000001, -0.9999999, -1.0000001, -1.9999999999};
float *FP;

char CHARS [256];
char *CP;

double DOUBLES [5] = {
	999999999999,
	0.999999999999,
	999999.999999,
	999999999999,
	-999999999999.999999999999
};
double *DP;

/**
 * Initialize the ASCII 256-Character List. Note that NOT every char can be
 * properly printed in terminal.
 */
void init_char_array() {
	puts("<Initiate Character Array>");
	int i = 0;
	CP = &CHARS[0];
	for (i = 0; i < CHARRANGE; i++) {
		*CP = (char) i;
		CP += 1;
	}
}

/**
 * Cast all float from FLOATS array to integer and print out the result
 */
void cast_float_to_int() {
	puts("<Cast Float to Integer>");
	int i = 0;
	int n = 0;
	FP = &FLOATS[0];
	for (i = 0; i < FLOATSIZE; i++) {
		n = (int) *FP;
		printf("\tCast float %f to integer %i\n", *FP, n);
		FP += 1;
	}
}

/**
 * Cast all integer from INTS array to float and print out the result
 */
void cast_int_to_float() {
	puts("<Cast Integer to Float>");
	int i = 0;
	float f;
	IP = &INTS[0];
	for (i = 0; i < INTSIZE; i++) {
		f = (float) *IP;
		printf("\tCast integer %i to float %f\n", *IP, f);
		IP += 1;
	}
}

/**
 * Cast all double from DOUBLES array to integer and print out the result
 */
void cast_double_to_int() {
	puts("<Cast Double to Integer>");
	int i = 0;
	int n;
	DP = &DOUBLES[0];
	for (i = 0; i < DOUBLESIZE; i++) {
		n = (int) *DP;
		printf("\tCast double %g to integer %i\n", *DP, n);
		DP += 1;
	}
}

/**
 * Cast all integer from INTS array to double and print out the result
 */
void cast_int_to_double() {
	puts("<Cast Integer to Double>");
	int i = 0;
	double d;
	IP = &INTS[0];
	for (i = 0; i < INTSIZE; i++) {
		d = (double) *IP;
		printf("\tCast integer %i to double %g\n", *IP, d);
		printf("\tCast integer %i to double %e\n", *IP, d);
		printf("\tCast integer %i to double %f\n", *IP, d);
		IP += 1;
	}
}

/**
 * Implementation is omitted since results can be expected
 */
void cast_double_to_float() {
	puts("<Cast Double to Float>");
	puts("\tYou already know what will happen ;)");
}

/**
 * Implementation is omitted since results can be expected
 */
void cast_float_to_double() {
	puts("<Cast Float to Double>");
	puts("\tYou already know what will happen ;)");
}

/**
 * Cast integer from 0 to 255 to character. Character will repeat once exceed
 * the range.
 */
void cast_int_to_char() {
	puts("<Cast Integer to Character>");
	int i = 0;
	char c;
	CP = &CHARS[0];
	for (i = 0; i < CHARRANGE; i++) {
		c = (char) i;
		printf("\tCast %dth Character to %c, which is equal to %c? %d\n", i, c, *CP, c == *CP);
		CP += 1;
	}
}

/**
 * Cast all characters from CHARS array to integer and print out the result
 */
void cast_char_to_int() {
	puts("<Cast Character to Integer>");
	int i = 0;
	int n;
	CP = &CHARS[0];
	for (i = 0; i < CHARRANGE; i++) {
		n = (int) *CP;
		printf("\tCast Character %c to Integer %d\n", *CP, n);
		CP += 1;
	}
}

/**
 * Cast all float from FLOATS array to character and print out the result
 */
void cast_float_to_char() {
	puts("<Cast Float to Character>");
	int i = 0;
	char c;
	FP = &FLOATS[0];
	for (i = 0; i < FLOATSIZE; i++) {
		c = (char) *FP;
		printf("Cast Float %f to Character %c\n", *FP, c);
		FP += 1;
	}
}

/**
 * Cast all character from CHARS array to floats and print out the result
 */
void cast_char_to_float(){
	puts("<Cast Character to Float>");
	int i = 0;
	float f;
	CP = &CHARS[0];
	for (i = 0; i < CHARRANGE; i++) {
		f = (float) *CP;
		printf("\tCast Character %c to Float %f\n", *CP, f);
		CP += 1;
	}
}

/**
 * Other cases of casting
 */
void misc() {
	int i, *ip;
	char c, *cp;
	float f, *fp;
	double d, *dp;
	long l, *lp;
	
	puts("<Miscellaneous Cast>");
	puts("\t<Cast Negative Integer to Character>");
	i = -81;
	c = (char) i;
	printf("\t\tCast Negative Integer %d to Character %c\n", i, c);
	i = -124;
	c = (char) i;
	printf("\t\tCast Negative Integer %d to Character %c\n", i, c);
	i = -190;
	c = (char) i;
	printf("\t\tCast Negative Integer %d to Character %c\n", i, c);
	i = -255;
	c = (char) i;
	printf("\t\tCast Negative Integer %d to Character %c\n", i, c);
}


/**
 * Main menu of this program
 */
int select_menu() {
	int choice = 0;
	puts("C Type Cast Lab Menu");
	puts("\t1. Cast Float to Integer");
	puts("\t2. Cast Integer to Float");
	puts("\t3. Cast Double to Integer");
	puts("\t4. Cast Integer to Double");
	puts("\t5. Cast Double to Float");
	puts("\t6. Cast Float to Double");
	puts("\t7. Cast Integer to Char");
	puts("\t8. Cast Char to Integer");
	puts("\t9. Cast Float to Char");
	puts("\t0. Cast Char to Float");
	puts("\t11. Miscellaneous Cast");
	puts("\t-1. Quit");
	printf("Select one to Start: ");
	scanf("%i", &choice);
	switch (choice) {
			case 1: cast_float_to_int(); break;
			case 2: cast_int_to_float(); break;
			case 3: cast_double_to_int(); break;
			case 4: cast_int_to_double(); break;
			case 5: cast_double_to_float(); break;
			case 6: cast_float_to_double(); break;
			case 7: cast_int_to_char(); break;
			case 8: cast_char_to_int(); break;
			case 9: cast_float_to_char(); break;
			case 0: cast_char_to_float(); break;
			case 11: misc(); break;
			case -1: puts("Bye!"); break;
			default: puts("<Invalid Menu Selection>"); break;
	}
	return choice;
}

/**
 * Execute this program
 */
int main() {
	init_char_array();
	int choice = 0;
	while (choice != -1) {
		choice = select_menu();
	}
	return 0;
}
