/**
 * Author: Yubing Hou
 * Date: June 27, 2014
 */
#include <limits.h>
#include <math.h>
#include <stdio.h>
/**
 * Demonstrate of calculating limit of a summation
 */

double geometric_summation(double init) {

	int step = 0;
	double sum;
	
	/* Use the upper limit of short integer to save rum-time */
	while (step < SHRT_MAX) {
		sum += pow(init, step);
		step++;
	}
	return sum;
}

/**
 * Demonstrate arithmatic summation
 */
int arithmatic_summation(int end) {

	int k;
	int sum;
	
	while (k < end) {
		sum += 4 * k + 1;
		k++;
	}
	return sum;
}

/**
 * Execute this program
 */
int main() {
	double oneThird = geometric_summation(1.0/3);
	printf("The limit of summation of 1/3 geometric series is: %f.\n", oneThird);
	int sum3000 = arithmatic_summation(3000);
	printf("The sum of (4k+1) till k = 3000 is: %d.\n", sum3000);
	return 0;
}
