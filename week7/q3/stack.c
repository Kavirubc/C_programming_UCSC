#include <stdio.h>
#include <stdlib.h>
#include "func.h"

StackNode *initializeStack()
{
    return NULL;
}

void pushElement(StackNode **top, int data)
{
    StackNode *newNode = (StackNode *)malloc(sizeof(StackNode));
    if (newNode == NULL)
    {
        printf("Error\n");
        return;
    }
    newNode->data = data;
    newNode->next = *top;
    *top = newNode;
}

int popElement(StackNode **top)
{
    if (*top == NULL)
    {
        printf("Error\n");
        return -1;
    }
    int data = (*top)->data;
    StackNode *temp = *top;
    *top = (*top)->next;
    free(temp);
    return data;
}

void displayStack(StackNode *top)
{
    while (top != NULL)
    {
        printf("%d\n", top->data);
        top = top->next;
    }
}
