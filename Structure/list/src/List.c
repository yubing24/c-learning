/**
 * Implement Integer Linked List Using C.
 * This program is released under the General Public License and
 * comes with absolutely NO WARRANTY.
 *
 * @author Yubing Hou
 * @date July 13, 2014
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * Define List Node Constructor
 */
struct Node {
	int value;
	struct Node *next;
};

/**
 * Define List Constructor. List will have unlimited size
 */
struct LinkedList {
	int size;
	struct Node first;
};

/**
 * Declare function signatures
 */
void ninit(struct Node *n, int value);
void linit(struct LinkedList *l);
void append(struct LinkedList *l, struct Node *n);
_Bool isEmpty(struct LinkedList *l);
_Bool getSize(struct LinkedList *l);
_Bool hasNext(struct Node *n);


/**
 * Initailze a node with a certain value
 */
void ninit(struct Node *n, int value) {
	(*n).value = value;
}

/**
 * Initialize the list to an empty list
 */
void linit(struct LinkedList *l) {
	l->size = 0;
	((*l).first).value = 0;
	((*l).first).next = NULL;
}

/**
 * Append a node to the end of the list
 */
void append(struct LinkedList *l, struct Node *n) {
	int i = 0;
	struct Node *tmp;
	while (i < l->size) {
	}
}

/**
 * Tell if the list is empty
 */
_Bool isEmpty(struct LinkedList *l) {
	return (l->size == 0);
}

/**
 * Get the size of the list
 */
int getSize(struct LinkedList *l) {
	return (l->size);
}

/**
 * Tell whether this node has next node following it
 */
_Bool hasNext(struct Node *n) {
	return (n->next == NULL);
}
/**
 * Get the next node of this node
 */
struct Node* getNext(struct Node *n) {
	return (*n).next;
}

void lprint(struct LinkedList *l) {
	struct Node *tmp;
	tmp = &((*l).first);
	while (hasNext(tmp)) {
		printf("%d ",tmp->value);
		tmp = ((*tmp).next);
	}
	puts("");
}

/**
 * Test the defination
 */
int main() {
	struct LinkedList list;
	
	puts("<Create a new LinkedList and Print It>");
	lprint(&list);
	
	struct Node n1;
	ninit(&n1, 10);
	
	return 0;
}
