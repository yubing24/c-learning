// Program 2.10 Round tables again but shorter
#include <stdio.h>

int main(void)
{
	float radius = 0.0f;
	float diameter = 0.0f;
	const float PI = 3.14159f;
	
	printf ("\nInput the radius of the table:");
	scanf("%f", &radius);
	
	diameter = radius * 2.0f;

	printf("\nThe circumference is %.5f.", 2.0f*PI*radius);
	printf("\nThe area is %.5f.\n", PI*radius*radius);

	return 0;
}
