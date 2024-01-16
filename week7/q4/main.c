#include <stdio.h>
#include "func.h"

int main()
{
    StackNode *stack = initializeStack();

    // Reading from file and pushing onto stack
    readFromFileAndPush("stack_input.txt", &stack);
    printf("Stack after reading from file:\n");
    displayStack(stack);

    // Popping from stack and writing to file
    popAndWriteToFile("stack_output.txt", &stack);

    return 0;
}
