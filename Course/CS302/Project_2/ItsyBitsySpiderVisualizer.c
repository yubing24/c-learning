/**
 * This is an implementation of the ItsyBitsySpiderVisualizer of project #2
 * assignment of the CS 302 of the University of Wisconsin-Madison. The purpose
 * of this program is to demonstrate the algorithm and structure of programming
 * using C instead of Java. This program is free software and has absolutely NO
 * WARRANTY. Use this at your own risk.
 *
 * If you intent to use the code of this program for your assignment, make sure
 * to consult with your instructor before you use any piece of this program.
 * Free software does not necessarily support academic misconduct.
 *
 * @Author: Yubing Hou
 * @Date: July 21, 2014
 */

#include <stdio.h>
#include "util.h"

/**
 * Define macros that will be used in this program
 */
#define SPIDER "^@^"
#define CLIMB "|^@^|"
#define FLUSH "|###|"
#define SPOUT "|   |"
#define GRID 5
#define WELCOME "Welcome to the Itsy Bitsy Spider visualizer!"
#define REQUEST "In order to tell the Itsy Bitsy's story, we need some information:"
#define PARAMINFO "Now you uwill ask the user to provide 3 parameters."
#define STAGE_ONE "The itsy bitsy spider climbed up the water spout..."
#define STAGE_TWO "Down came the rain and washed the spider out..."
#define STAGE_THREE "Out came the sun and dried up all the rain..."
#define STAGE_FOUR "And the itsy bitsy spider climbed up the spout again!!"

/**
 * Declare variables that will be shared accross this program
 */
static int LENGTH;
static int HEIGHT;
static int WIDTH;
static int SIZEX;
static int SIZEY;

/**
 * Print out program start-up information
 */
void startup() {
	int i;
	for (i = 0; i < 19; i++) {
		printf("%s ", SPIDER);
	}
	printf("%s\n", SPIDER);
	printf("%s\n", WELCOME);
	printf("%s\n", REQUEST);
	printf("%s\n", PARAMINFO);
}
/**
 * Get the length of the spout
 */
int get_spout_length() {
	printf("First what should be the spout's length?\n");
	printf("(Enter %d - %d or 'r' for a random number in that range.)\n", SPOUT_MIN, SPOUT_MAX);
	int value = 0;
	scanf("%d", &value);
	while (value < SPOUT_MIN || value > SPOUT_MAX) {
		if (value < SPOUT_MIN) {
			printf("Your integer was less than %d. Please enter another.\n", SPOUT_MIN);
			scanf("%d", &value); 
		}
		else if (value > SPOUT_MAX) {
			printf("Your integer was larger than %d. Please enter another.\n", SPOUT_MAX);
			scanf("%d", &value); 
		}
	}
	return value;
}

/**
 * Get the height that spider climbs
 */
int get_climb_height() {
	printf("How high does Itsy Bitsy climb before the rain washes the spider out?\n");
	printf("(Enter %d-%d or 'r' for a random number in that range.)\n", CLIMB_MIN, (LENGTH - 1));
	int value = 0;
	scanf("%d", &value);
	while (value < CLIMB_MIN || value > (LENGTH - 1)) {
		if (value < CLIMB_MIN) {
			printf("Your integer was less than %d. Please enter another.\n", CLIMB_MIN);
			scanf("%d", &value); 
		}
		else if (value > (LENGTH - 1)) {
			printf("Your integer was larger than %d. Please enter another.\n", (LENGTH - 1));
			scanf("%d", &value); 
		}
	}
	return value;
}
/**
 * Get the width between frames
 */
int get_frame_width() {
	printf("How far apart should the frames of the story be located?\n");
	printf("(Enter %d-%d)\n", FRAME_MIN, FRAME_MAX);
	int value = 0;
	scanf("%d", &value);
	while (value < FRAME_MIN || value > FRAME_MAX) {
		if (value < FRAME_MAX) {
			printf("Your integer was less than %d. Please enter another.\n", FRAME_MIN);
			scanf("%d", &value); 
		}
		else if (value > FRAME_MAX) {
			printf("Your integer was larger than %d. Please enter another.\n", FRAME_MAX);
			scanf("%d", &value); 
		}
	}
	return value;
}
/**
 * Initialize values of SIZEX and SIZEY
 */
void init_size() {
	SIZEX = HEIGHT * (GRID + 1) - 1;
	SIZEY = LENGTH;
}

/**
 * Plot an empty grid of spouts
 */
void make_grid(char *cp) {
	int x, y;
	
	// Initialize grid
	for (y = 0; y < SIZEY; y++) {
		for (x = 0; x < SIZEX - 6; x = x + 6) {
			*cp = '|';
			*cp = *(cp + 1);
			*cp = ' ';
			*cp = *(cp + 1);
			*cp = ' ';
			*cp = *(cp + 1);
			*cp = ' ';
			*cp = *(cp + 1);
			*cp = '|';
			*cp = *(cp + 1);
			*cp = '\t';
			*cp = *(cp + 1);
		}
	}
}

/**
 * Print out grid
 */
void print_grid(char *cp) {
	int x, y;
	
	for (y = 0; y < SIZEY; y++) {
		for (x = 0; x < SIZEX; x++) {
			printf("%c", *cp);
			++*cp;
		}
		puts("");
	}
}

/**
 * Display the first stage of climbing
 */
void show_stage_one() {
	puts(STAGE_ONE);
}

/**
 * Display the second stage of climbing
 */
void show_stage_two() {
	puts(STAGE_TWO);
}

/**
 * Display the third stage of climbing
 */
void show_stage_three() {
	puts(STAGE_THREE);
}

/**
 * Display the fourth stage of climbing
 */
void show_stage_four() {
	puts(STAGE_FOUR);
}

/**
 * Execute this program
 */
int main() {
	startup();
	LENGTH = get_spout_length();
	HEIGHT = get_climb_height();
	WIDTH = get_frame_width();
	init_size();
	char grid [SIZEY] [SIZEX];
	make_grid(&cp);
	print_grid(&cp);
	show_stage_one();
	show_stage_two();
	show_stage_three();
	show_stage_four();
	return 0;
}
