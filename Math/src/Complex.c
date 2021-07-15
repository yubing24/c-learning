/**
 * Implement complex number and its basic operation using C
 * @author Yubing Hou
 * @date August 7, 2014
 */
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

struct Complex {
	int r;
	int i;
};

struct Complex cxadd(struct Complex c1, struct Complex c2) {
	struct Complex tmp;
	tmp.r = c1.r + c2.r;
	tmp.i = c1.i + c2.i;
	return tmp;
}

struct Complex cxmul(struct Complex c1, struct Complex c2) {
	struct Complex tmp;
	tmp.r = c1.r * c2.r - c1.i * c2.i;
	tmp.i = c1.r * c2.i + c1.i * c2.r;
	return tmp;
}

struct Complex cxneg(struct Complex c) {
	struct Complex tmp;
	tmp.r = -c.r;
	tmp.i = -c.i;
	return tmp;
}

float cxabs(struct Complex c) {
	float tmp = c.r * c.r + c.i * c.i;
	tmp = sqrt(tmp);
	return tmp;
}

_Bool cxequal(struct Complex c1, struct Complex c2) {
	if (c1.r == c2.r && c1.i == c2.i) {
		return true;
	}
	else {
		return false;
	}
}

void cxinit(struct Complex *c, int r, int i) {
	(*c).r = r;
	(*c).i = i;
}

void cxprint(struct Complex c) {
	printf("%d + %di\n", c.r, c.i);
}

int main(void) {

	struct Complex c1;
	cxinit(&c1, 5, 3);
	cxprint(c1);
	
	struct Complex c2;
	cxinit(&c2, 5, 3);
	
	printf("C1 == C2 ? %d\n", cxequal(c1, c2));
	
	struct Complex c3;
	cxinit(&c3, 1, 1);
	printf("Absolute value of C3 is %f\n", cxabs(c3));
	
	struct Complex c4;
	cxinit(&c4, 1, -1);
	
	printf("C3 == C4 ? %d\n", cxequal(c3, c4));
	
	struct Complex tmp;
	tmp = cxadd(c1, cxneg(c2));
	cxprint(tmp);
	tmp = cxmul(c3, c4);
	cxprint(tmp);
	return 0;
}
