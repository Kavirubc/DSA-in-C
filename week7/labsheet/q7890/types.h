#ifndef TYPES_H
#define TYPES_H

#define MAX_SIZE 100

typedef struct
{
    int data[MAX_SIZE];
    int front;
    int rear;
} CircularQueue;

#endif
