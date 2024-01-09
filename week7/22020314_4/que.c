#include "types.h"
#include "func.h"
#include <stdio.h>

int initializeQueue(CircularQueue *queue)
{
    queue->front = -1;
    queue->rear = -1;
    queue->count = 0;
}

int isQueueEmpty(CircularQueue *queue)
{
    return (queue->count == 0);
}

int isQueueFull(CircularQueue *queue)
{
    return (queue->count == MAX_SIZE);
}

int enqueue(CircularQueue *queue, int item)
{
    if (isQueueFull(queue))
    {
        printf("Queue is full. Cannot enqueue.\n");
        return 0;
    }

    if (queue->front == -1)
        queue->front = 0;

    queue->rear = (queue->rear + 1) % MAX_SIZE;
    queue->data[queue->rear] = item;
    queue->count++;
}

int dequeue(CircularQueue *queue)
{
    if (isQueueEmpty(queue))
    {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }

    int item = queue->data[queue->front];
    queue->front = (queue->front + 1) % MAX_SIZE;
    queue->count--;

    if (queue->count == 0)
    {
        queue->front = -1;
        queue->rear = -1;
    }

    return item;
}

int displayQueue(CircularQueue *queue)
{
    if (isQueueEmpty(queue))
    {
        printf("Queue is empty.\n");
        return 0;
    }

    printf("Queue: ");
    int i = queue->front;
    while (i != queue->rear)
    {
        printf("%d ", queue->data[i]);
        i = (i + 1) % MAX_SIZE;
    }
    printf("%d\n", queue->data[i]);
    return 0;
}
