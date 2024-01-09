// func.h
#ifndef FUNC_H
#define FUNC_H

#include "types.h"
#include <stdbool.h> // Add this line for bool

void initialize_int_queue(Queue *queue, int size);
void enqueue_int(Queue *queue, int data);
int dequeue_int(Queue *queue);
void display_int(Queue *queue);

void initialize_char_queue(Queue *queue, int size);
void enqueue_char(Queue *queue, char data);
char dequeue_char(Queue *queue);
void display_char(Queue *queue);

#endif // FUNC_H