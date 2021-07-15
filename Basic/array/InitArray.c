#include <stdio.h>
#include <stdlib.h>

void init_array(int *array, int size, int value) {
	if (size <= 1) {
		puts("<Error: Invalid Array Size>");
		return;
	}
	else {
		int i = 0;
		for (i = 0; i < size; i++) {
			*array = value;
			array += 1;
		}
		return;
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


int main(void) {
	int size;
	int suc = 1;
	int init = 0;

	printf("Enter the size of array: ");
	scanf("%d", &size);
	printf("Enter the initial value: ");
	scanf("%d", &init);
	
	int *myarray = (int *) malloc(size * sizeof(int));
	init_array(myarray, size, init);
	printArray(myarray, size);
	free(myarray);
	return 0;
}
