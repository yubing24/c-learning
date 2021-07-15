/* To compile this program in terminal, use:
 * gcc Struct.c -o Struct -lm
 *
 * Option -lm indicating linking a library. Since math.h is not
 * automatically recognized.
 */
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/* Print the menu of CS302 Tool Box
 */
void menu(void) {
	printf("\n[Practice of Using Function]\n");
	printf("===== CS302 TOOL BOX =====\n");
	printf("T > COIN TOSS SIMULATOR\n");
	printf("G > GRADE ESTIMATOR\n");
	printf("C > COLOR CHALLENGE\n");
	printf("Q > QUIT\n");
	printf("Type code letter for your choice: \n\n");
}

bool is_even(int num) {
	if (num%2 == 0)
		return true;
	else
		return false;
}

bool can_be_divided_by_three(int num) {
	if (num%3 == 0)
		return true;
	else
		return false;
}

int main(void) {
	int i = 1;
	float j = 1.1;
	double k = 99.9939;
	j = sqrt(-k);


	/* Cannot simply put number in printf. In another word printf
	 * only accept string.
	 */
	printf("\n[Practice of Using Print Statement]\n");
	printf("%d\n",i);
	printf("%1.1f\n", j);
	printf("%0.10f\n", j);
	printf("I Love This Number: %0.7f\n", k);

	/* Practice of for loop and if statement, and using function
	 */
	printf("\n[Practice of For Loop]\n");
	for (i = 1; i < 10; i = i + 1) {
		printf("Integer i is: %d\n", i);

		if (is_even(i) == true) {
			printf("Number %d is also an even number!\n", i);
		}
	}
	i = 4;

	/* Practice of while loop and break
	 */
	printf("\n[Practice of While Loop]\n");
	while (i < 20) {
		printf("Integer i is: %d\n", i);

		if (can_be_divided_by_three(i) == true) {
			printf("Number %d can be divided by 3!\nLoop ends here!\n", i);
			break;
		}
		i = i + 1;
	}

	/* Practice of using array. Notice that each element in array
	 * is just random number before being assigned to a specific
	 * value.
	 */
	int mylist [10];
	printf("\n[Practice of Using Array]\n");
	for (i = 0; i < 10; i++) {
		printf("Position %d of mylist is: [%d]\n", i, mylist[i]);
	}
	printf("\n[Practice of Assign Values to Array]\n");
	for (i = 0; i < 10; i++) {
		mylist [i] = i;
	}
	for (i = 0; i < 10; i++) {
		printf("Position %d of mylist is: [%d]\n", i, mylist[i]);
	}
	/* menu(); */
	return 0;
}
