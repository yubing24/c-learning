#include <stdio.h>

#define SIZE 5

int *initArray(int array [], int size, int init) {
	int i = 0;
	int array [size];
	for (i = 0; i < size; i++) {
		*array = init;
		array += 1;
	}
	return array;
}

int * copyArray(int *array, int size) {
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
	int i = 0;
	
	int a1 [SIZE] = {1, 2, 3, 4, 5};
	printArray(a1, SIZE);
	int a2 [SIZE];
	a2 = initArray(a1, SIZE, 8);
	
	printArray(a1, SIZE);
	printArray(a2, SIZE);
	
	return 0;
}
