#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdbool.h>
#include <stdlib.h>

typedef struct {
	int value;
	int *next;
} Node;

typedef struct {
	Node *first;
	int cursor;
	int size;
} LinkedList;

//========================== Signatures ==========================//
void add (LinkedList *l, Node *n);
int getnv (Node *n);
LinkedList * newlist ();
Node * newnode (int v);
int next (Node *n);
void printnode (Node *n);
//================================================================//

/**
 * Add a node to the end of a linked list
 */
void add (LinkedList *l, Node *n) {
	if (l->first == NULL) {
		l->first = n;
		l->cursor = 0;
		l->size = 1;
	}
}

/**
 * Get the value of a node
 */
int getnv (Node *n) {
	return n->value;
}

LinkedList * newlist () {
	LinkedList list, *l;
	list.first = NULL;
	list.cursor = 0;
	list.size = 0;
	l = &list;
	return l;
}

/**
 * Initialize a node with value
 */
Node * newnode (int v) {
	Node n, *np;
	np = &n;
	n.value = v;
	return np;
}

int next (Node *n) {
	return n->next;
}

void printlist (LinkedList *l) {
	int i = 0;
	Node *np;
	
	while (i <= l->size) {
		np = l->first + i * sizeof (Node) ;
		printf("%d ", np->value);
		i = i + 1;
	}
	
	puts("");
}
/**
 * Display information of this node
 */
void printnode (Node *n) {
	printf("<Node: %x>\n", n);
	printf("\t.value = %d\n", getnv(n));
}


#endif
