#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void test() {
	int v;
	printf("Enter value for node: ");
	scanf("%d", &v);
	Node *n = newnode (v);
	printnode (n);
	
	LinkedList *l = newlist ();
	add(l, n);
	printlist (l);
}

int main(void) {
	test();
	return 0;	
}
