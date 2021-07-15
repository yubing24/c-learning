#include <stdio.h>
#include <stdlib.h>

int main (void) {
	void * ptr = (void *) malloc (sizeof (char) * 18);
	int i = 0;
	for (i = 0; i < 18; i++) {
		((char )*ptr[i]) = 'a' + 1;
	}
	printf ("%s", (char*) ptr);
	free (ptr);
	return 0;
}
