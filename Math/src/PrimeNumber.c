/**
 * This program read user's input and find the prime number in range
 */

#include <stdio.h>
#include <time.h>

int main () {
	
	int range;
	int each, j;
	int count = 0;
	int isprime = 0; // 0 is true, 1 is false
	
	printf("PrimeNumber Calculator\n");
	printf("Enter a positive integer: ");
	scanf("%d", &range);
	
	// Set up timer for benchmark measure
	time_t timer;
	char buffer[25];
	struct tm* tm_info;
	time(&timer);
	tm_info = localtime(&timer);
	strftime(buffer, 25, "%Y:%m:%d:%H:%M:%S", tm_info);
	printf("\nStart at: %s\n", buffer);
	
	for (each = 1; each < range; each++) {
	
		// Test if "each" is a prime number
		for (j = 1; j <= each; j++) {
			if (each%j == 0) {
				isprime = 1;
				break;
			}
		}
		
		if (isprime == 0) {
			count++;
		}
		isprime = 0;
	}
	
	// Print time again for benchmarking
	printf("Total number prime numbers between 1 and %d is: %d.\n", range, count);
	
	time(&timer);
	tm_info = localtime(&timer);
	strftime(buffer, 25, "%Y:%m:%d:%H:%M:%S", tm_info);
	printf("Finish at: %s\n", buffer);
}
