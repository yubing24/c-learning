/**
 * Static.c practices the usage and explores the properties of static
 */

#include<stdio.h>

/**
 * Practice 1: K&R claims that static variables are guaranteed to
 * be initialized as 0
 */
static int var1;
static char var2;
static float var3;
static double var4;

void init_static() {
	puts("\n[===== Initial Values of Static Variables =====]");
	printf("\tInitial value of integer: [%d]\n", var1);
	printf("\tInitial value of character: [%c]\n", var2);
	printf("\tInitial value of float: [%16.16f]\n", var3);
	printf("\tInitial value of double: [%16.16f]\n", var4);
}

int main (int argc, char *argv [] ) {
	var2 = 'k';
	init_static();
	return 0;
}
