#include <stdio.h>

void frontinc() {
	int i = 0;
	puts("<Front Increment>");
	for (i = 0; i < 10; ++i) {
		printf("%d ", i);
		i = ++i;
		printf("(%d) ", i);
	}
	puts("");
}

void backinc() {
	int i = 0;
	puts("<Back Increment>");
	for (i = 0; i < 10; i++) {
		printf("%d ", i);
		printf("(%d) ", i);
		i = i++;
	}
	puts("");
}

int main(void) {
	frontinc();
	backinc();
	return 0;
}
