//write a c program to delete any given nide frim a singly linked list. The program should take the node to be deleted as input from the user. The program should print the list after deleting the node. initial link list contains 1,2,3,4,5
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void createList(int n);


struct node *head;
int main()
{
    int n, position;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);

    createList(n);

    printf("\nData in the list \n");
    displayList();

    printf("\nEnter the node position you want to delete: ");
    scanf("%d", &position);

    deleteNode(position);

    printf("\nData in the list \n");
    displayList();

    return 0;
}