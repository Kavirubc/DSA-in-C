#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int front;
    int rear;
} CircularQueue;

void enqueue(CircularQueue *queue, int value) {
    if ((queue->rear + 1) % MAX_SIZE == queue->front) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }
    queue->rear = (queue->rear + 1) % MAX_SIZE;
    queue->data[queue->rear] = value;
}

int dequeue(CircularQueue *queue) {
    if (queue->front == queue->rear) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }
    queue->front = (queue->front + 1) % MAX_SIZE;
    return queue->data[queue->front];
}

void displayQueue(CircularQueue *queue) {
    int i = (queue->front + 1) % MAX_SIZE;
    while (i != (queue->rear + 1) % MAX_SIZE) {
        printf("%d ", queue->data[i]);
        i = (i + 1) % MAX_SIZE;
    }
    printf("\n");
}

void readFromFileAndEnqueue(CircularQueue *queue, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open file.\n");
        return;
    }
    int value;
    while (fscanf(file, "%d", &value) != EOF) {
        enqueue(queue, value);
    }
    fclose(file);
}

void dequeueAndUpdateFile(CircularQueue *queue, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Failed to open file.\n");
        return;
    }
    while (queue->front != queue->rear) {
        int value = dequeue(queue);
        fprintf(file, "%d ", value);
    }
    fclose(file);
}

int checkFileIntegrity(CircularQueue *queue, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open file.\n");
        return 0;
    }
    int i = (queue->front + 1) % MAX_SIZE;
    int value;
    while (fscanf(file, "%d", &value) != EOF) {
        if (value != queue->data[i]) {
            fclose(file);
            return 0;
        }
        i = (i + 1) % MAX_SIZE;
    }
    fclose(file);
    return 1;
}

int main() {
    CircularQueue queue;
    queue.front = MAX_SIZE - 1;
    queue.rear = MAX_SIZE - 1;

    // Question 7: Read from file and enqueue
    readFromFileAndEnqueue(&queue, "numbers.txt");
    printf("Queue after enqueuing: ");
    displayQueue(&queue);

    // Question 8: Dequeue and update file
    dequeueAndUpdateFile(&queue, "updated_numbers.txt");
    printf("Updated file content: ");
    displayQueue(&queue);

    // Question 9: Empty check before dequeue
    if (queue.front == queue.rear) {
        printf("Queue is empty. Cannot dequeue.\n");
    } else {
        int dequeuedValue = dequeue(&queue);
        printf("Dequeued value: %d\n", dequeuedValue);
    }

    // Question 10: File integrity check
    int isFileIntegrityValid = checkFileIntegrity(&queue, "updated_numbers.txt");
    if (isFileIntegrityValid) {
        printf("File data matches queue content.\n");
    } else {
        printf("File data does not match queue content.\n");
    }

    return 0;
}
