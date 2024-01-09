#ifndef TYPES_H
#define TYPES_H

#define MAX_SIZE 5

typedef struct
{
    int front;
    int rear;
    int count;
    int data[MAX_SIZE];
} CircularQueue;

#endif
