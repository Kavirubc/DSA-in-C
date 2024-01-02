#ifndef FUNC_H
#define FUNC_H

#include <stdbool.h>

bool isEmpty();
bool isFull();
int pop();
void push(char x);
void printStack();
bool isBracketValid(char *str); 

#endif
