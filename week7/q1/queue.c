#include "types.h"
#include "func.h"
#include <stdio.h>
#include <stdlib.h>

void initializeQueue(Queue *q)
{
    q->front = q->rear = NULL;
}

void enqueueElement(Queue *q, int data)
{
    QueueNode *newNode = (QueueNode *)malloc(sizeof(QueueNode));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = data;
    newNode->next = NULL;

    if (q->rear == NULL)
    {
        q->front = q->rear = newNode;
        return;
    }

    q->rear->next = newNode;
    q->rear = newNode;
}

int dequeueElement(Queue *q)
{
    if (q->front == NULL)
    {
        printf("Queue is empty\n");
        return -1;
    }

    QueueNode *temp = q->front;
    int data = temp->data;
    q->front = q->front->next;

    if (q->front == NULL)
    {
        q->rear = NULL;
    }

    free(temp);
    return data;
}

void displayQueue(Queue *q)
{
    QueueNode *temp = q->front;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
