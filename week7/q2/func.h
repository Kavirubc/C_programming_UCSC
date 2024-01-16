#ifndef FUNC_H
#define FUNC_H

#include "types.h"

void initializeQueue(Queue *q);
void enqueueElement(Queue *q, int data);
int dequeueElement(Queue *q);
void displayQueue(Queue *q);

#endif
