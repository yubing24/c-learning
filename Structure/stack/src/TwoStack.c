/**
 * Implement two stacks in one array
 */
 
#include <stdio.h>
#include <stdbool.h>

#define CAP 20
#define EMPTY 0

typedef struct {
	int s [CAP];
	int c1, c2;
} Stack;

_Bool push (Stack *s, int w, int v) {
	if (w == 0) {
	}
	else if (w == 1) {
	}
	else {
		puts ("<stack not exists>");
	}
}

void pop (Stack *s, int w) {
	if (w == 0) {
	}
	else if (w == 1) {
	}
	else {
		puts ("<Stack not exists>");
	}
}

_Bool empty (Stack *s) {
	return (s->c1 + s->c2) == EMPTY;
}

_Bool full (Stack *s) {
	return (s->c1 + s->c2) == CAP;
}
