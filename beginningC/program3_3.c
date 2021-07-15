// Program 3.3 Using nested ifs to analyze numbers
#include<stdio.h>
#include<limits.h>

int main(void)
{
	long test = 0L;
	
	printf("\nEnter an integer less than %ld:", LONG_MAX);
	//Note: LONG_MAX and other limits are only activated when library limit.h is included at the beginning
	scanf("%ld", &test);
	
	if (test %2L == 0L)
	{
		printf ("\nThe number %ld is even.\n", test);
	
		if ((test/2L) % 2L == 0L)
		{
			printf("\nHalf of %ld is also even.\n", test);
			// Note: if this condition is not satisfied, this part won't be activated.
		}
	}
	else
	printf ("\nThe number %ld is odd.\n", test);
	
	return 0;
}
