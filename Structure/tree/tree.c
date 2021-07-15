	#include <stdbool.h>
#include <stdio.h>
#include "tnode.h"

int main (void) {
	NODE node;
	setiv (&node, 2);

	info (&node);
	return 0;
}
