#include <stdio.h>
#include "Jive.h"

int main() {
	startup();
	do {
		jive_run();
	} while (running == 1);
	return 0;
}
