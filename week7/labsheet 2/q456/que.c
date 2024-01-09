
//que.c
#include "types.h"
#include "func.h"
#include <stdio.h>

#define MAX_SIZE 5

int front = -1;
int rear = -1;
int count = 0;
int queue[MAX_SIZE];

bool isFull() {
    return (count == MAX_SIZE);
}

bool isEmpty() {
    return (count == 0);
}

void enqueue(int data) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }
    
    rear = (rear + 1) % MAX_SIZE;
    queue[rear] = data;
    count++;
}

int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }
    
    front = (front + 1) % MAX_SIZE;
    int data = queue[front];
    count--;
    
    return data;
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    
    printf("Queue: ");
    int i = front;
    while (i != rear) {
        i = (i + 1) % MAX_SIZE;
        printf("%d ", queue[i]);
    }
    printf("\n");
}
