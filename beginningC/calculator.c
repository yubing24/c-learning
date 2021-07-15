#include <math.h>
#include <stdio.h>

int main(void)
{
printf("\n\n		Math Calculator\n\n");
int mode = 0;
printf("\nPlease Select the Mode You Want to Use:\n	1. Equations\n	2. Functions\n	3. Statistics");
scanf("%d", &mode);
if (mode == 1) //mode == 1: solve equations
{
	int equation =0;
	printf("\nPlease Select the Type of Equation You Want to Solve:\n	1. A*x + B = C\n	2. A*x^2 + B*x + C = 0\n");
	scanf("%d", &equation);
	if (equation == 1) //equation ==1: Ax+B=C
		{
			float A = 0;
			float B = 0;
			float C = 0;
			printf("\nPlease type the three parameters A, B, C here: ");
			printf("\nA = ");
			scanf("%f", &A);
			if (A == 0.0)
				{
					printf("\n		ERROR! The coefficient of X cannot be null!\n");
					return 0;
				}
			if (A !=0)
				{
					printf("\nB = ");
					scanf("%f", &B);
					printf("\nC = ");
					scanf("%f", &C);
					float x = (C-B)/A;
					printf("Solution x is %f \n", x);
					return 0;
				}
			return 0;
		}
	/*if (equation == 2) //equation ==2: Ax^2 + Bx + C = 0
		{
			double A = 0.0;
			double B = 0.0;
			double C = 0.0;
			printf("\nFor A*x^2 + B*x + C = 0, please type the three parameters A, B, C here: ");
			printf("\nA = ");
			scanf("%d", &A);
			if (A==0.0)
				{
					printf("\n		ERROR! The coefficient of X cannot be null!\n");
					return 0;
				}
			if (A!=0.0)
				{
					printf("\nB = ");
					scanf("%f", &B);
					printf("\nC = ");
					scanf("%f", &C);
					double x1= 0.0;
					x1 = (-B + sqrt(B*B - 4*A*C) ) / (2*A);
					double x2 = 0.0; 
					x2 = (-B - sqrt(B*B - 4*A*C) ) / (2*A);
					printf("The first solution of x is x1 = %d \n", x1);
					printf("The first solution of x is x2 = %d \n", x2);
					return 0;
				}
			return 0;
		}*/
	return 0;
}

if (mode ==2) //General Functions
	{
		int function = 0;
		printf("\nPlease Select the Type of Function You Want to Use:\n	1. Linear Functions\n	2. Exponential and Logarithm Functions\n	3. Trignometric Functions\n");
		scanf("%d", &function);
		if (function == 1)
			{
				int func_linear = 0;	
				printf("\nPlease Select the Type of Linear Function You Want to Use:\n	1. x-y\n	2. (x, y)-z\n	3. (x, y, z)-w\n");
				scanf("%d", &func_linear);
				return 0;
			}
		return 0;
	}
return 0;
}
	
