#ifndef FUNCS_H
#define FUNCS_H

#include "types.h"

Node *createNode(int data);
void insertAtBeginning(Node **headRef, int data);
void insertAtEnd(Node **headRef, int data);
void deleteNode(Node **headRef, int data);
void printLinkedList(Node *head);
Node *searchNode(Node *head, int data);

#endif
