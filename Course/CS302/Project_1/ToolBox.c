/**
 * A simplified implementation of CS 302 program assignment using the C
 * programming language. The purpose of this program is to help people who are
 * taking CS 302 at the University of Wisconsin-Madison and want to explore
 * different implementation of program assignment.
 *
 * [NOTE] It is important for beginner programmers to figure out good algorithm
 * for performing input checking, and that is the purpose of your P1 and P2
 * projects of CS 302. This program only performs very limited input checking 
 * as a basic guide of on this topic.
 *
 * [NOTE] This program is written in C instead of Java. The only difference is
 * that this program uses C to implement the P1 project. Though language choice
 * is different, the basic structure is the same. Since you may have not learned
 * using method (called "function" in C) or array, you shall not use approaches
 * that are used in this program. Again, only a reference for you to understand
 * programming better.
 *
 * This program is released under the General Public License v3 and absolutely
 * has NO WARRANTY. You must add proper citation in you assignment if you use
 * this program as reference.
 *
 * Author: Yubing Hou
 * Date: June 26, 2014
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static int seed; /* save random seed */
static int quit = 0; /* default running status is 0 */

/* Constants for color challenge */
static const char COLOR [] = {'C', 'M', 'F', 'B', 'O', 'L'};

/**
 * Tell main function when it's time to quit
 */
int check_quit_status() {
	if (quit == 0) return 0;
	else return 1;
}

/**
 * Ask user for random number seed
 */
void get_random_seed() {

	int value;
	int valid = 0;
	
	do {
		printf("Enter seed value: ");
		valid = scanf("%d", &value);
		
		printf("Value of value is: %d.\n", value);
		printf("Value of valid is: %d.\n", valid);
		valid = 1;
	} while (valid == EOF);

	seed = value;
	srand(seed);
}

/**
 * Print out the main menu of ToolBox
 */
void print_main_menu() {
	printf("\n===== CS302 TOOL BOX =====\n");
	printf("T > COIN TOSS SIMULATOR\n");
	printf("G > GRADE ESTIMATOR\n");
	printf("C > COLOR CHALLENGE\n");
	printf("Q > QUIT\n");
	printf("Type code letter for your choice: ");
}

/**
 * Simulate coin toss from user's input.
 */
void coin_toss() {
	int toss;
	int result;
	int head;
	int tail;
	int step;
	float rate;
	
	printf("\nCOIN TOSS SIMULATOR\n");
	do {
		
		/* Reset values */
		toss = 0;
		result = 0;
		head = 0;
		tail = 0;
		step = 0;
		rate = 0;
		
		printf("Enter 0 to end. How many coin tosses? ");
		scanf("%d", &toss);
		for (step = 0; step < toss; step++) {
			result = rand() % 2;
			if (result == 0) {
				head++;
			}
			if (result == 1) {
				tail++;
			}
		}
		rate = 100.0 * head / toss;
		
		if (toss > 0) {
			printf("%d heads and %d tails means %f%% tosses were heads.\n",
				head, tail, rate);
		}

		else if (toss < 0) {
			printf("Can not toss a coin %d times.\n", toss);
		}
		
	} while (toss != 0);
}
/**
 * Calculate the grade with entered numbers.
 */
void display_grade(int exam_earn, int exam_poss, int prog_earn, int prog_poss) {

	float grade;
	
	if (exam_poss > 0 && prog_poss > 0) {
		grade = 70.0 * exam_earn / exam_poss + 30.0 * prog_earn / prog_poss;
	}
	else if (exam_poss == 0 && prog_poss > 0) {
		grade = 30.0 * prog_earn / prog_poss;
	}
	else if (exam_poss > 0 && prog_poss == 0) {
		grade = 70.0 * exam_earn / exam_poss;
	}
	else {
		grade = 0.0;
	}
	
	if (grade >= 90.0) {
		printf("Grade estimate for %f%% is a A\n", grade);
		return;
	}
	if (grade >= 80.0) {
		printf("Grade estimate for %f%% is a B\n", grade);
		return;
	}
	if (grade >= 70.0) {
		printf("Grade estimate for %f%% is a C\n", grade);
		return;
	}
	if (grade >= 60.0) {
		printf("Grade estimate for %f%% is a D\n", grade);
		return;
	}
	if (grade < 60.0) {
		printf("Grade estimate for %f%% is a F\n", grade);
		return;
	}
}

/**
 * Estimate grade from user's input
 */
void grade_estimate() {
	int prog_earn = -1;
	int prog_poss = -1;
	int exam_earn = -1;
	int exam_poss = -1;
	
	printf("\nGRADE ESTIMATOR\n");
	
	do {
		printf("Enter exam points earned (int): ");
		scanf("%d", &exam_earn);
	} while (exam_earn < 0);
	
	do {
		printf("Enter exam points possible (int): ");
		scanf("%d", &exam_poss);
	} while (exam_poss < 0);
	
	do {
		printf("Enter program points earned (int): ");
		scanf("%d", &prog_earn);
	} while (prog_earn < 0);
	
	do {
		printf("Enter program points possible (int): ");
		scanf("%d", &prog_poss);
	} while (prog_poss < 0);
	
	display_grade(exam_earn, exam_poss, prog_earn, prog_poss);
	
	/* For Debugging use only. Comment out upon submission */
	/*printf("Earned exam points: %d.\n", exam_earn);
	printf("Possible exam points: %d.\n", exam_poss);
	printf("Earned program points: %d.\n", prog_earn);
	printf("Possible program points: %d.\n", prog_poss);*/
}

/**
 * Generate color for user to guess
 */
int * make_colors() {
	static char color [4];
	
	/* Generate color sequence */
	color[0] = COLOR[ rand() % 6 ];
	color[1] = COLOR[ rand() % 6 ];
	color[2] = COLOR[ rand() % 6 ];
	color[3] = COLOR[ rand() % 6 ];
	
	int *p;
	p = &color;
	
	printf("[DEBUG] Generated colors are: %s.\n", color);
	
	return *p;
}

/**
 * Perform color challenge
 */
void color_challenge() {
	printf("\nCOLOR CHALLENGE\n");
	int *p;
	p = make_colors();
	
}

/**
 * Execute the program
 */
int main() {

	int run;
	char *input [1];

	get_random_seed();

	do {
		
		print_main_menu();
		scanf("%s", *input);
		
		if (*input[0] == 'T' || *input[0] == 't') {
			coin_toss();
		}
		else if (*input[0] == 'G' || *input[0] == 'g') {
			grade_estimate();
		}
		else if (*input[0] == 'C' || *input[0] == 'c') {
			color_challenge();
		}
		else if (*input[0] == 'Q' || *input[0] == 'q') {
			quit = 1;
		}
		else {
			printf("[%s] is not valid choice.\n", *input);
		}
			
		run = check_quit_status();
			
	} while (run == 0);
	
	printf("\nBye!\n");
	
	return 0;
}
