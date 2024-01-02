#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void insertAtBeginning(Node **headRef, int data)
{
    Node *newNode = createNode(data);
    newNode->next = *headRef;
    *headRef = newNode;
}

void insertAtEnd(Node **headRef, int data)
{
    Node *newNode = createNode(data);
    if (*headRef == NULL)
    {
        *headRef = newNode;
        return;
    }
    Node *last = *headRef;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
}

void deleteNode(Node **headRef, int data)
{
    Node *temp = *headRef, *prev;
    if (temp != NULL && temp->data == data)
    {
        *headRef = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != data)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return;
    prev->next = temp->next;
    free(temp);
}

void printLinkedList(Node *head)
{
    printf("Data in the list\n");
    Node *current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

Node *searchNode(Node *head, int data)
{
    Node *current = head;
    while (current != NULL)
    {
        if (current->data == data)
        {
            return current;
        }
        current = current->next;
    }
    return NULL;
}
