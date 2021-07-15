#include <stdio.h>
#include <stdbool.h>

#define MAXNODE 500

union value {
	int i;
	char c;
	float f;
	double d;
	_Bool b;
};

typedef union value VALUE;

struct node {
	VALUE key;
	struct node *left;
	struct node *right;
	struct node *parent;
};

typedef struct node NODE;

//============================ Function Signature ============================//
_Bool hasleft (NODE n);
_Bool hasright (NODE n);
struct node * getleft (NODE n);
struct node * getright (NODE n);
int getiv (NODE n);
void setiv (NODE * n, int v);

//========================= Function Implementation ==========================//
_Bool hasleft (NODE n) {
	return getleft (n) == NULL;
}

_Bool hasright (NODE n) {
	return getright (n) == NULL;
}

struct node * getleft (NODE n) {
	return n.left;
}

struct node * getright (NODE n) {
	return n.right;
}

int getiv (NODE n) {
	return (n.key).i;
}

void setiv (NODE * n, int v) {
	(n->key).i = v;
}

void info (NODE * n) {
	printf("<Tree Node: %lx>\n", &n);
	printf("\tKey Value");

}
