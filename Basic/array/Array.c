/**
 * Learn using Array and Pointer!
 * Function included:
 * --- void address_of_array()
 * --- void address_in_array()
 * --- void pass_array(int mist [] )
 * --- pass_array_using_pointer(int mist [] )
 */
#include <stdio.h>

/**
 * Print the "address of array", which is supposed to be the location of the
 * first element. [Verified]
 */
void address_of_array() {
	puts("\n[======= Get the Address of an Array =======]");
	int foo [] = {1,2,3};
	printf("\tArray foo is at [%p]\n", &foo);
}

/**
 * Print the address of each element in the array. Notice that they are consecutive
 */
void address_in_array() {
	puts("\n[======= Get Addresses of Elements =======]");
	int foo [] = {1,2,3};
	printf("\tArray foo is at [%p]\n", &foo);
	int i = 0;
	for (i = 0; i < 3; i++) {
		// You will notice that the position of foo is the same as the first element
		printf("\tElement at [%d] has address [%p]\n", i, &foo[i]);
	}
}

/**
 * Pass an array to function
 */
void pass_array(int mist []) {
	puts("\n[======= Pass Array to Function =======]");
	int i = 0;
	for (i = 0; mist[i] != NULL; i++) {
		printf("\tElement at [%d] is [%d]\n", i, mist[i]);
	} 
}

/**
 * This looks like a better approach, but it is still diffcult for me to 
 * manage the size of this array
 */
void pass_array_using_pointer(int mist []) {
	puts("\n[======= Pass Array to Function Using Pointer =======]");
	int *ip;
	ip = mist;
	while (*ip != NULL) {
		printf("Array has value [%d]\n", *ip);
		*ip++;
	}
}

/**
 * Pass a two dimension array to a function. Notice that the row size of that
 * array must be known before this pass can be allowed. Weird.
 */
void pass_2d_array(int mist [] [3]) {
	puts("\n[======= Pass 2D Array to Function =======]");
	printf("\tSize of this 2D array is [%d]\n", sizeof(mist));
}

/**
 * Attempts to change the content of array by function. Verify that function
 * pass array by reference instead of value, and array is very similar to a
 * pointer.
 */
void change_array(int mist []) {
	puts("\n[======= Change Array By Passing Array Directly =======]");
	int i;
	for (i = 0; mist[i] != NULL; i++) {
		printf("\tChanging %dth element...\n", i);
		mist[i] = 1;
	}
}

/**
 * Execute the program
 */
int main (int argc, char *argv [] ) {

	int size = 5;
	int nums [size];
	int mist [5] = {121,323,4524,233,444};
	int mat [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i = 0;
	
	address_of_array();
	address_in_array();
	pass_array(mist);
	pass_array_using_pointer(mist);
	pass_2d_array(mat);
	change_array(mist);
	
	return 0;
}
