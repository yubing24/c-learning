/**
 * Print out contents of array by using pointer and array's size
 */
#include <stdio.h>
/**
 * Modify array by pointer and the size of array
 */
void print_array(int *array, int size) {
	int i = 0;
	for (i = 0; i < size; i++) {
		printf("%d", *array);
		*array++;
	}
}

int main() {
	int mist [5] = {1, 2, 3, 4, 5};
	int *ip = mist;
	int size = sizeof(mist)/sizeof(mist[0]);
	print_array(ip, size); // I wonder why use ip instead of &ip
	return 0;
}
