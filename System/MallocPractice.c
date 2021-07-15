#include <stdio.h>
#include <stdlib.h>

int * makeIntegerArray(int size) {
	if (size <= 0) {
		static int array [1] = {0};
		return array;
	}
	else {
		int *iap;
		iap = (int *) malloc (size * sizeof (int));
		return iap;
	}
}

void printArray(int *array, int size) {
	puts("<Function printArray()>");
	int i = 0;
	for (i = 0; i < size; i++) {
		printf("a[%d] = %d\n", i, *array);
		array += 1;
	}
}

void after_free () {
	puts("<Value of Dynamic Variable after free()>");
	int *ip; 
	ip = (int *) malloc ( sizeof(int) );
	*ip = 3;
	printf("\tAfter malloc(), *ip is assigned to %d\n", *ip);
	free (ip);
	printf("\tAfter free(), *ip's value is %d\n", *ip);

	char *cp;
	cp = (char *) malloc ( sizeof(char) );
	*cp = 'K';
	printf("\tAfter malloc(), *cp is assigned to %c\n", *cp);
	free (cp);
	printf("\tAfter free(), *cp is assigned to %c\n", *cp);

	double *dp;
	dp = (double *) malloc ( sizeof(double) );
	*dp = 99.99;
	printf("\tAfter malloc(), *dp is assigned to %f\n", *dp);
	free (dp);
	printf("\tAfter free(), *dp is assigned to %f\n", *dp);

}

int main(void) {
	after_free ();
	/*int *ip;
	int size = 10;
	ip = makeIntegerArray(size);
	printArray(ip, size);
	int length = sizeof(ip)/sizeof(int);
	printf("Size of *ip after %d * sizeof(int) malloc is %d\n", size, length);
	
	free (ip);*/
	return 0;
}
