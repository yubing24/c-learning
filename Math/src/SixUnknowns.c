/**
 * This program attempts to solve the integer solution of equation:
 * A^5 + B^5 + C^5 + D^5 + E^5 = F^5 where A-F are ALL larger than 0 and no
 * larger than 75, and they are incrementally increasing in value. There is
 * exactly on solution to this equation.
 */
#include <stdio.h>
#include <time.h>
#define TITLE "Solve equation A^5 + B^5 + C^5 + D^5 + E^5 = F^5"

/**
 * Define integer power function
 */
int power(int base, int index) {

	if (index == 0) return 1;
	
	else {
		int product = 1;
		for (index; index >= 1; index--) {
			product *= base;
		}
		return product;
	}
}
/**
 * Execute this program
 */
int main() {

	// Set up timer for benchmark measure
	time_t timer;
	char buffer[25];
	struct tm* tm_info;
	time(&timer);
	tm_info = localtime(&timer);
	strftime(buffer, 25, "%Y:%m:%d:%H:%M:%S", tm_info);
	printf("\nStart: %s\n", buffer);

	// Present results in console
	printf("%s\n", TITLE);

	int A,B,C,D,E,F, STEP;
	
	// Left and right side of equation
	int left, right;
	
	// Solving status
	int solved = 0;
	
	for (A = 1; A < 75; A++) {
		STEP++;
		
		for (B = A; B < 75; B++) {
			STEP++;
			
			for (C = B; C < 75; C++) {
				STEP++;
				
				for (D = C; D < 75; D++) {
					STEP++;
					
					for (E = D; E < 75; E++) {
						STEP++;
						
						for (F = E; F < 75; F++) {
							STEP++;
							left = power(A,5) + power(B,5) + power(C,5) + 
									power(D,5) + power(E,5);
							right = power(F,5);
							
							if (left == right) {
								solved = 1;
								break;
							}
						}
						if (solved != 0) break;
					}
					if (solved != 0) break;
				}
				if (solved != 0) break;
			}
			if (solved != 0) break;
		}
		if (solved != 0) break;
	}
	
	left = power(A, 5) + power(B, 5) + power(C, 5) + power(D, 5) + power(E, 5);
	right = power(F, 5);
	
	if (left == right) {
		printf("Equation solved\n");
		printf("A = %d\n", A);
		printf("B = %d\n", B);
		printf("C = %d\n", C);
		printf("D = %d\n", D);
		printf("E = %d\n", E);
		printf("F = %d\n", F);
		printf("%d = %d\n", left, right);
		printf("Total Steps: %d\n", STEP);
	}
	else {
		printf("Equation cannot be solved. Check your code again.\n");
	}
	
	// Print time again for benchmarking
	time(&timer);
	tm_info = localtime(&timer);
	strftime(buffer, 25, "%Y:%m:%d:%H:%M:%S", tm_info);
	printf("Finish at: %s\n", buffer);
}
