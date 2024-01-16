#ifndef TYPES_H
#define TYPES_H

typedef struct QueueNode
{
    int data;
    struct QueueNode *next;
} QueueNode;

typedef struct
{
    QueueNode *front, *rear;
} Queue;

#endif
