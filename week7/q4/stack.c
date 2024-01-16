#include <stdlib.h>
#include <stdio.h>
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

void readFromFileAndPush(const char *filename, StackNode **top)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return;
    }

    int value;
    while (fscanf(file, "%d", &value) != EOF)
    {
        pushElement(top, value);
    }

    fclose(file);
}

void popAndWriteToFile(const char *filename, StackNode **top)
{
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        perror("Error opening file");
        return;
    }

    while (*top != NULL)
    {
        int value = popElement(top);
        fprintf(file, "%d\n", value);
    }

    fclose(file);
}
