#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

//insert values 20,200 and 243 to the linked list
struct node *insert(struct node *head)
{
    struct node *ptr = NULL;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 20;
    ptr->link = NULL;
    head = ptr;

    struct node *ptr1 = NULL;
    ptr1 = (struct node *)malloc(sizeof(struct node));
    ptr1->data = 200;
    ptr1->link = NULL;
    ptr->link = ptr1;

    struct node *ptr2 = NULL;
    ptr2 = (struct node *)malloc(sizeof(struct node));
    ptr2->data = 243;
    ptr2->link = NULL;
    ptr1->link = ptr2;

    return head;
}

void print_data(struct node *head)
{
    if (head == NULL)
        printf("Linked list is empty");
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}

int main()
{
    struct node *head = NULL;
    head = insert(head);
    print_data(head);

    // Don't forget to free the allocated memory to avoid memory leaks
    struct node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->link;
        free(temp);
    }

    return 0;
}