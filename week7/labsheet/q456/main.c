// main.c
#include <stdio.h>
#include "types.h"
#include "func.h"
#include <string.h>

int main()
{
    // Test circular queue implementation for integers
    printf("Circular Queue for Integers\n");
    QueueInt queueInt;                  // Change this to Queue
    initialize_int_queue(&queueInt, 5); // Change this to initialize_int_queue

    enqueue_int(&queueInt, 10); // Change this to enqueue_int
    enqueue_int(&queueInt, 20); // Change this to enqueue_int
    enqueue_int(&queueInt, 30); // Change this to enqueue_int
    display_int(&queueInt);     // Change this to display_int

    dequeue_int(&queueInt); // Change this to dequeue_int
    display_int(&queueInt); // Change this to display_int

    enqueue_int(&queueInt, 40); // Change this to enqueue_int
    enqueue_int(&queueInt, 50); // Change this to enqueue_int
    display_int(&queueInt);     // Change this to display_int

    dequeue_int(&queueInt); // Change this to dequeue_int
    dequeue_int(&queueInt); // Change this to dequeue_int
    display_int(&queueInt); // Change this to display_int

    // Test circular queue implementation for characters
    printf("\nCircular Queue for Characters\n");
    QueueChar queueChar;
    initialize_char_queue(&queueChar, 5); // Change this to initialize_char_queue

    enqueue_char(&queueChar, 'H'); // Change this to enqueue_char
    enqueue_char(&queueChar, 'E'); // Change this to enqueue_char
    enqueue_char(&queueChar, 'L'); // Change this to enqueue_char
    enqueue_char(&queueChar, 'L'); // Change this to enqueue_char
    enqueue_char(&queueChar, 'O'); // Change this to enqueue_char
    display_char(&queueChar);      // Change this to display_char

    dequeue_char(&queueChar); // Change this to dequeue_char
    dequeue_char(&queueChar); // Change this to dequeue_
