#include <stdio.h>
#include <string.h>
#include "lex.c"
#include "Util.h"

static int running = 1;
static char args [1];

void startup() {
	printf("Jive 0.0.1\n");
	printf("[Jive Is Very Elegant]\n");
	printf("Last Updated: %s\n", LASTUPDATE); 
}

void jive_run() {
	printf(">>> ");
	getline();
	scanf("%s", args);
	if (strcmp(&args, "exit") == 0) {
		running = 0;
		printf("Bye!\n");
	}
	else {
		lex(args)
	}
}



#define DANCER "dancer"
#define COUPLE "couple"
#define COMP "comp"
#define EVENT "event"
#define JUDGE "judge"
