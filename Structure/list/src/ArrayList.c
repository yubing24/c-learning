#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define UNIT 20


struct ArrayList {
	int *list;
	int size;
};

void add(struct ArrayList *al, int i) {
	int size = sizeof((*al).list)/sizeof(int) + 1;
	int new [size], j = 0;
	for (j = 0; j < size - 1; j++) {
		new[j] = (*al).list++;
	}
	new [size - 1] = i;
	(*al).list = &new;
	(*al).size++;
}

void lprint(struct ArrayList *al) {
	int i = 0;
	for (i = 0; i < (*al).size; i++) {
		printf("%d ", (*al).list++);
	}
	puts("");
}

int main(void) {
	struct ArrayList al;
	al.list = (int *) malloc(sizeof(int));
	
	lprintf(&al);
	
	free(al.list);
	return 0;
}
