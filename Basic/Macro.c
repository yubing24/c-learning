/**
 * Macro.c practices and explores the functionality of Macro operation using the
 * C programming language
 */
 
#include <stdio.h>
#include "../Common/ConsoleLib.h"
#include "../Stat/Univariate.h"

#define max(A, B) ((A) > (B) ? (A) : (B))
#define square(x) (x*x)
#define printstr(string) printf("%s\n", string)
#define printint(integer) printf("Value = [%d]\n", integer)

/**
 * Execute this program
 */
int main(int argc, char *argv [] ) {

	STARTUP("C Macro Practice");
	
	int var [] = {1,2,3,4,5,6,7,8,9,10};
	int *p;
	p = &var[0];
	
	int i;
	for (i = 0; i < 9; i++) {
		printf("Value at %d is %d.\n", i, *p);
		p = &var[i];
	}
	
	int size = getsize(var);
	printf("Size is [%d]\n", size);
	

	
	int x = max(1,4);
	printf("Value of x is: %d.\n", x);
	
	int mix [] = {1,2,3,4,5};
	x = getsize(mix);
	printf("Value of x is: %d.\n", x);
	return 0;
}
