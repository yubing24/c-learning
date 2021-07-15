#include <stdio.h>

#define SIZE 10

int * array_init() {
	static int a[SIZE];
	int i = 0;
	for (i = 0; i < SIZE; i ++) {
		a[i] = 0;
	}
	return a;
}

int * array_dec() {
	static int a [SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	return a;
}

void getArray() {
	puts("<Function: getArray()>");
	int *myArray, i = 0;
	myArray = array_init();
	for (i = 0; i < SIZE; i++) {
		printf("myArray[%d] = %d\n", i, *myArray);
		myArray += 1;
	}
}

void printArray() {
	puts("<Function: printArray()>");
	int *myArray, i = 0;
	myArray = array_dec();
	for (i = 0; i < SIZE; i++) {
		printf("myArray[%d] = %d\n", i, *myArray);
		myArray += 1;
	}
}

void pointer_to_pointer () {
	puts("\n<Pointer to Pointer>");
	int n, *ip, *ip2, **ip3;
	n = 17;
	ip = &n;
	ip2 = &ip;
	*ip3 = *ip;

	puts("\t< int n, *ip, *ip2, **ip3; >")
	puts ("\t< n = 17; >");
	printf("\tn = %d\n", n);
	puts ("\t< ip= &n; >");
	printf("\t*ip = %d\n", *ip);
	printf("\tip = %lx\n", ip);
	printf("\t&ip = %lxu\n", &ip);
	puts ("\t< ip2 = &ip; >");
	printf("\t*ip2 = %d\n", *ip2);
	printf("\tip2 = %lx\n", ip2);
	printf("\t&ip2 = %lx\n", &ip2);
	puts ("\t< *ip3 = *ip; >");
	printf("\t*ip3 = %d\n", *ip3);
	printf("\tip3 = %lx\n", ip3);
	printf("\t&ip3 = %lx\n", &ip3);

}

int main(void) {
	getArray();
	printArray();
	pointer_to_pointer ();
	return 0;
}
