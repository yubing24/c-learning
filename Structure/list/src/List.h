#ifndef LIST_H
#define LIST_H

extern const void * List;

void * append (void * list, const void * element);
void * remove (void * list, const void * element);
int size (const void * list)

#endif
