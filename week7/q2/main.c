#include "func.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *inputFile, *outputFile;
    Queue q;
    int num;

    initializeQueue(&q);

    inputFile = fopen("queue_input.txt", "r");
    if (inputFile == NULL)
    {
        perror("Error opening input file");
        return 1;
    }

    while (fscanf(inputFile, "%d", &num) != EOF)
    {
        enqueueElement(&q, num);
    }
    fclose(inputFile);

    printf("Queue: ");
    displayQueue(&q);

    outputFile = fopen("queue_output.txt", "w");
    if (outputFile == NULL)
    {
        perror("Error opening output file");
        return 1;
    }

    while (q.front != NULL)
    {
        fprintf(outputFile, "%d\n", dequeueElement(&q));
    }
    fclose(outputFile);

    return 0;
}
