#include <stdio.h>


typedef struct {
	int m;
} IntStruct;

typedef struct {
	char m;
} CharStruct;

typedef struct {
	float m;
} FloatStruct;

typedef struct {
	double m;
} DoubleStruct;

typedef struct {
	struct M {
	};
} StructStruct;

typedef struct {
	char *lname;
	char *fname;
	char p;
	int *places;
} Dancer;

typedef struct {
	int a;
	int b;
} TwoIntStruct;


int main(void) {
	IntStruct i;
	CharStruct c;
	FloatStruct f;
	DoubleStruct d;
	StructStruct s;
	Dancer dancer;
	TwoIntStruct tis;
	
	printf("Size of Single-Integer-Membered Instance is: %lu\n", sizeof(i));
	printf("Size of Single-Integer Membered Type is %lu\n", sizeof(IntStruct));
	printf("Size of Single-Character-Membered Structure is: %lu\n", sizeof(c));
	printf("Size of Single-Float-Membered Structure is: %lu\n", sizeof(f));
	printf("Size of Single-Double-Membered Structure is: %lu\n", sizeof(d));
	printf("Size of Single-Struct (no member)-Membered Structure is: %lu\n", sizeof(s));
	printf("Size of Dancer (2xChar *, 1xChar, 1xInt *) Structure is: %lu\n", sizeof(dancer));
	printf("Size of Two-Integer Structure is: %lu\n", sizeof(tis));
	return 0;
}
