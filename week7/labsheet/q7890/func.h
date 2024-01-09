#ifndef FUNC_H
#define FUNC_H

#include "types.h"

enqueue(CircularQueue *queue, int value);
dequeue(CircularQueue *queue);
displayQueue(CircularQueue *queue);
readFromFileAndEnqueue(CircularQueue *queue, const char *filename);
dequeueAndUpdateFile(CircularQueue *queue, const char *filename);
checkFileIntegrity(CircularQueue *queue, const char *filename);

#endif