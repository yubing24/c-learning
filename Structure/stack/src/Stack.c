/**
 * Implement Stack Using C
 * @author Yubing Hou
 * @date August 7, 2014
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define BOT -1
#define EMPTY 0
#define ZERO 0

/**
 * Define a stack data structure. Top is the "cursor" of a digit. If there is 
 * no item in stack, cursor will be 0. If the stack is full, cursor will be
 * the number of items in stack
 */
typedef struct {
	int cursor;
	int items[SIZE];
} Stack;

//================================================================//
void init (Stack *s);
_Bool isempty (Stack *s);
_Bool isfull (Stack *s);
void push (Stack *s, int i);
int pop (Stack *s);
int top (Stack *s);
//================================================================//

/**
 * Initialize a stack
 */
void init (Stack *s) {
	s->cursor = BOT;
	int i = BOT;
	for (i = BOT; i < SIZE; i++) {
		s->items[i] = ZERO;
	}
}

/**
 * Tell whether stack is empty
 */
_Bool isempty ( Stack *s) {
	return s->cursor == EMPTY;
}

/**
 * Tell whether stack is full
 */
_Bool isfull (Stack *s) {
	return s->cursor == SIZE;
}

/**
 * Push an item to stack. Executation will halt if stack overflows
 */
void push (Stack *s, int i) {
	if (isfull(s) == false) {
		s->items[s->cursor] = i;
		s->cursor += 1;
	}
	else {
		puts("<Error: Stack Overflow>");
		exit(1);
	}
}

/**
 * Pop out an item from stack. Executation will halt if stack underflows
 */
int pop (Stack *s) {
	if (isempty(s) == true) {
		puts("<Error: Stack Underflow>");
		exit(1);
	}
	else {
		int tmp = (*s).items[(*s).cursor];
		(*s).cursor -= 1;
		return tmp;
	}
}

/**
 * Get the value of the top element of this stack
 */
int top (Stack *s) {
	if (isempty(s) == true) {
		puts("<Empty Stack: No Top Element>");
		return -1;
	}
	else {
		int tmp = s->items[s->cursor];
		printf("\t(stack top: %d)\n", tmp);
		return tmp;
	}
}

/**
 * Display information 
 */
void toString(Stack *s) {
	puts("Type: struct Stack");
	printf("Top: %d\n", s->cursor);
	printf("Full Status: %d\n", isfull(s));
	printf("Empty Status: %d\n", isempty(s));
}

/**
 * Print out stack
 */
void print(Stack *s) {
	int i = SIZE;
	for (i = SIZE - 1; i >= BOT; i--) {
		printf("\t|-%d\n", s->items[i]);
	}
}

/**
 * Execute this program
 */
int main(void) {
	Stack s;
	init(&s);
	int e;
	
	do {
		printf("Enter a number to push to stack: ");
		scanf("%d", &e);
		push (&s, e);
		print(&s);
	} while (isfull(&s) == false);
	
	if (isfull(&s) == true) {
		puts("<Full stack>");
	}
	
	
	
	return 0;
}
