#ifndef FUNC_H
#define FUNC_H

#include "types.h"

StackNode *initializeStack();
void pushElement(StackNode **top, int data);
int popElement(StackNode **top);
void displayStack(StackNode *top);

#endif
