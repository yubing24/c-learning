// Program 2.9 More round tables
#include <stdio.h>
#define PI 3.14159f //This defines the constant at the beginning of the program, add the constant property at the end!
#define E 2.71828f

int main (void)
{
	float radius = 0.0f;
	float diameter = 0.0f;
	float circumference = 0.0f;
	float area = 0.0f;

	printf("\n	Input the diameter of a table:");
	scanf("%f", &diameter);

	radius = diameter/2.0f;
	circumference = 2.0f*PI*radius;
	area = PI*radius*radius;

	printf("\n	The circumference is %.2f. ", circumference);
	printf("\n	The area is %.2f.\n", area);

	printf("\n	%.4f\n", E);
	return 0;
}
