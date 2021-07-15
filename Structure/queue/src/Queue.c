/**
 * Implement Queue Using C
 * @author Yubing Hou
 * @date August 7, 2014
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define CAPACITY 20
#define EMPTY 0
#define FRONT 0
#define END 19

typedef struct {
	int size;				// Actual items in queue
	int items[CAPACITY];	// Home of queue, which can have CAPACITY items
	int front;				// Item of the front (to be removed)
	int end;				// Item of the end (newly added)
} Queue;


//========================== Signatures ==========================//
void init (Queue *q);
_Bool empty (Queue *q);
_Bool full (Queue *q);
void print (Queue *q);
void toString (Queue *q);
void insert (Queue *q, int i);
int qremove (Queue *q);
//================================================================//
/**
 * Initialize an empty queue
 */
void init (Queue *q) {
	q->size = 0;
	q->front = 0;
	q->end = 0;
	int i = 0;
	for (i = 0; i < CAPACITY; i++) {
		q->items[i] = 0;
	}
}

/**
 * Tell whether this queue contains any element
 */
_Bool empty (Queue *q) {
	return (q->size == EMPTY);
}

/**
 * Tell whether this queue is full
 */
_Bool full (Queue *q) {
	return (q->size == CAPACITY);
}

/**
 * Print out the content of this queue
 */
void print (Queue *q) {
	if ( empty(q) == false && (q->front != q->end)) {
		int i = q->front, range = q->end;
		for (i = q->front; i < range; i++) {
			printf("%d ", q->items[i]);
		}
	}
	else if ( empty(q) == false && (q->front == q->end)) {
		int i = q->front;
		for (i = q->front; i < CAPACITY; i++) {
			printf("%d ", q->items[i]);
		}
		for (i = 0; i < q->front; i++) {
			printf("%d ", q->items[i]);
		}
	}
	else if ( empty (q) == true) {
		puts ("<Empty Queue>");
	}
	puts("");
}

/**
 * Get the property of this queue
 */
void tostring (Queue *q) {
	puts("<Property of Queue>");
	printf("\tSize = %d\n", q->size);
	printf("\tFront = %d\n", q->front);
	printf("\tEnd = %d\n", q->end);
	printf("\tIs Full? %d\n", full(q));
	printf("\tIs Empty? %d\n", empty(q));
}

/**
 * Insert an item to the end of a queue
 */
void insert (Queue *q, int i) {
	if (full(q) == false) {
		q->items[q->end] = i;
		q->size += 1;
		q->end++;
		if (q->end == CAPACITY) {
			q->end = FRONT;
		}
	}
	else {
		puts("<Error: Queue is full>");
	}
}

/**
 * Remove an item from the front of a queue
 */
int qremove (Queue *q) {
	if (empty(q) == true) {
		puts("<Error: Queue is empty>");
		exit(1);
	}
	else {
		int tmp = q->items[q->front];
		q->items[q->front] = 0;
		q->front++;
		q->size--;
		if (q->front == CAPACITY) {
			q->front = FRONT;
		}
		return tmp;
	}
}

/**
 * Test this implementation of queue
 */
void test () {
	Queue q;
	init (&q);
	print (&q);
}

/**
 * Execute the testing program
 */
int main (void) {
	test ();
	/*int i = 0;
	struct Queue q;
	qinit(&q);
	qprint(&q);
	toString(&q);
	
	puts("\nInsert 5 to queue and print it");
	qinsert(&q, 5);
	qprint(&q);
	toString(&q);
	
	puts("\nInsert 3 to queue and print it");
	qinsert(&q, 3);
	qprint(&q);
	toString(&q);
	
	puts("\nRemove an item from front and print it");
	qremove(&q);
	qprint(&q);
	toString(&q);
	
	puts("\nRemove another item from front and print it");
	qremove(&q);
	qprint(&q);
	toString(&q);
	
	puts("\nInsert 15 number 8 to queue and print it");
	for (i = 0; i < 15; i++) {
		qinsert(&q, 8);
	}
	qprint(&q);
	toString(&q);
	
	puts("\nInsert 5 number 3 to queue and print it");
	for (i = 0; i < 5; i++) {
		qinsert(&q, 3);
	}
	qprint(&q);
	toString(&q);
	
	puts("\nRemove 6 elements from front and print it");
	for (i = 0; i < 6; i++) {
		qremove(&q);
	}
	qprint(&q);
	toString(&q);
	
	puts("\nInsert 6 number 99 to queue and print it");
	for (i = 0; i < 6; i++) {
		qinsert(&q, 99);
	}
	qprint(&q);
	toString(&q);
	*/
	
	return 0;
}
