#ifndef FUNC_H
#define FUNC_H

#include "types.h"
#include <stdbool.h> 

int initializeQueue(CircularQueue *queue);
int isQueueEmpty(CircularQueue *queue);
int isQueueFull(CircularQueue *queue);
int enqueue(CircularQueue *queue, int item);
int dequeue(CircularQueue *queue);
int displayQueue(CircularQueue *queue);


#endif