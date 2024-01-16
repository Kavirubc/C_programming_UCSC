#ifndef FUNC_H
#define FUNC_H

#include "types.h"

// Stack operations
StackNode *initializeStack();
void pushElement(StackNode **top, int data);
int popElement(StackNode **top);
void displayStack(StackNode *top);

// File handling functions
void readFromFileAndPush(const char *filename, StackNode **top);
void popAndWriteToFile(const char *filename, StackNode **top);

#endif
