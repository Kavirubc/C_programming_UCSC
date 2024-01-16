#include <stdio.h>
#include "func.h"

int main()
{
    StackNode *stack = initializeStack();

    pushElement(&stack, 10);
    pushElement(&stack, 20);
    pushElement(&stack, 30);

    printf("Stack after pushes: \n");
    displayStack(stack);

    printf("\nPopped element: %d\n", popElement(&stack));

    printf("Stack after pop: \n");
    displayStack(stack);

    return 0;
}
