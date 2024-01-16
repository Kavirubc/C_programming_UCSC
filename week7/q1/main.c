#include "func.h"
#include <stdio.h>

int main()
{
    Queue q;
    initializeQueue(&q);

    enqueueElement(&q, 10);
    enqueueElement(&q, 20);
    enqueueElement(&q, 30);

    printf("Queue: ");
    displayQueue(&q);

    printf("Dequeued: %d\n", dequeueElement(&q));

    printf("Queue after dequeue: ");
    displayQueue(&q);

    return 0;
}
