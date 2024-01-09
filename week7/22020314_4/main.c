// main.c
#include <stdio.h>
#include "types.h"
#include "func.h"
#include <string.h>

int main()
{
    CircularQueue intQueue;
    initializeQueue(&intQueue);

    printf("Enqueueing 1, 2, 3, 4, 5 into the integer queue.\n");
    enqueue(&intQueue, 1);
    enqueue(&intQueue, 2);
    enqueue(&intQueue, 3);
    enqueue(&intQueue, 4);
    enqueue(&intQueue, 5);
    displayQueue(&intQueue);

    printf("Dequeuing two elements from the integer queue.\n");
    dequeue(&intQueue);
    dequeue(&intQueue);
    displayQueue(&intQueue);

    CircularQueue charQueue;
    initializeQueue(&charQueue);

    printf("Enqueueing 'H', 'E', 'L', 'L', 'O' into the character queue.\n");
    enqueue(&charQueue, 'H');
    enqueue(&charQueue, 'E');
    enqueue(&charQueue, 'L');
    enqueue(&charQueue, 'L');
    enqueue(&charQueue, 'O');
    displayQueue(&charQueue);

    printf("Dequeuing two characters from the character queue.\n");
    dequeue(&charQueue);
    dequeue(&charQueue);
    displayQueue(&charQueue);

    return 0;
}
