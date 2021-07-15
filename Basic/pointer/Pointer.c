#include <stdio.h>
#include "Variables.h"

/**
 * Integer is a global variable declared in Variables.h
 */
int Integer = 0;

/**
 * Explore the basic properties of a pointer
 */
void pointer_property() {
	int num = 9;
	int *ip; // * is an indirection operator. To 
	ip = &num;
	
	printf("Value of initial variable is [%d]\n", num);
	printf("Location of init variable is [%p]\n", &num);
	printf("Value of *ip is [%d]\n", *ip); // *ip is the value that it points to
	printf("Value of &ip is [%p]\n", &ip); // &ip is the address of the pointer
	printf("Value of ip is [%p]\n", ip); // ip is the address of num
}

void pointer_and_array() {
	puts("\nDeclare integer array as \"int array [5] = {1,2,3,4,5};\"");
	int array [5] = {1, 2, 3, 4, 5};
	int *ip = array;
	int size = sizeof(array)/sizeof(array[0]);
	printf("Print array: %p\n", array);
	printf("Print pointer: %d\n", *ip);
	puts("Pointer to array is actually pointer to its first element!");
	puts("Now add 1 to pointer's value...");
	while (*ip < size) {
		*ip++;
		printf("Print pointer: %d\n", *ip);
	}
	
	puts("\nMake a new pointer by \"int *newip = {1,3,5,7,9};\"");
	int *newip = {9,8,7,6,5};
	printf("Print pointer: %d\n", newip[0]);
}

/**
 * Directly operation on the global variable
 */
void add(int n) {
	Integer = Integer + n;
}

/**
 * Operation on a pointer instead to avoid pass-by-value errors
 */
void addOne (int *p) {
	*p = *p + 1;
}

void pointers_to_single_var() {
	int var = 9;
	int *p1, *p2;
	p1 = &var;
	p2 = &var;
	
	puts("\n[======= Practice: Multi-pointers to a Single Variable =======]");
	puts("In this experiment, we have one int variable, and two pointers.");
	printf("Value of variable is [%d]\n", var);
	puts("Make both pointers point to variable:");
	printf("\tPointer A\n\t\tValue = %d\n\t\tAddress = %p\n", *p1, p1);
	printf("\tPointer B\n\t\tValue = %d\n\t\tAddress = %p\n", *p2, p2);
	puts("Now change the value through one of them.");
	*p1 = 22;
	printf("Value of variable is [%d]\n", var);
	printf("\tPointer A\n\t\tValue = %d\n\t\tAddress = %p\n", *p1, p1);
	puts("Now, check the other pointer's value:");
	printf("\tPointer B\n\t\tValue = %d\n\t\tAddress = %p\n", *p2, p2);
}

/**
 * Execute the program
 */
int main(int argc, char *argv[]) {
	
	pointer_property();
	pointer_and_array();

	/**
	 * Make a pointer pointing to the global variable
	 */
	int *ip;
	ip = &Integer;
	
	// Use a global functio to change the value
	puts("\n[By Global Function]");
	printf("Value is [%d]\n", Integer);
	add(1);
	printf("Add 1 directly using variable, value now is [%d]\n", Integer);
	
	// Now, use a pointer to change the value
	puts("\n[By Pointer]");
	printf("Value is [%d]\n", Integer);
	addOne(ip);
	printf("Add 1 by using a pointer to variable, value now is [%d]\n", *ip);
	
	pointers_to_single_var();
	
	return 0;
}

