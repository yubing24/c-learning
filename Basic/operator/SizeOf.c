/**
 * Gain experience in using sizeof operator
 */

#include <stdio.h>

struct D2Point {
	int x;
	int y;
};

struct D3Point {
	int x;
	int y;
	int z;
};

struct QNum {
	char component;
	int size;
	float strength;
	char sign;
};

void primitive_sizes() {
	int sizeInt = sizeof(int);
	int sizeFloat = sizeof(float);
	int sizeDouble = sizeof(double);
	int sizeBool = sizeof(_Bool);
	int sizeLong = sizeof(long);
	int sizeChar = sizeof(char);
	
	printf("Size of int is %d\n", sizeInt);
	printf("Size of float is %d\n", sizeFloat);
	printf("Size of double is %d\n", sizeDouble);
	printf("Size of _Bool is %d\n", sizeBool);
	printf("Size of long is %d\n", sizeLong);
	printf("Size of char is %d\n", sizeChar);
}

void structure_sizes() {
	int sizeD2Point = sizeof(struct D2Point);
	int sizeD3Point = sizeof(struct D3Point);
	int sizeQNum = sizeof(struct QNum);
	
	printf("Size of 2D Coordinate is %d\n", sizeD2Point);
	printf("Size of 3D Coordinate is %d\n", sizeD3Point);
	printf("Size of a quantum number is %d\n", sizeQNum);
}

int main(void) {
	primitive_sizes();
	structure_sizes();
	return 0;
}
