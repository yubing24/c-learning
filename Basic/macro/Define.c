/**
 * Practice using #define macros to customize C language
 */
#include <stdio.h>

#define run() main()
#define print printf

int run() {
	print("Hello World!\n");
	return 0;
}
