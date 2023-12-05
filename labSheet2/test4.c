#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the linked list
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the linked list
void insertNode(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct Node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to merge two sorted linked lists
struct Node *mergeLists(struct Node *list1, struct Node *list2)
{
    struct Node *mergedList = NULL;
    struct Node **current = &mergedList;

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->data < list2->data)
        {
            *current = createNode(list1->data);
            list1 = list1->next;
        }
        else
        {
            *current = createNode(list2->data);
            list2 = list2->next;
        }
        current = &(*current)->next;
    }

    // If there are remaining nodes in list1 or list2
    while (list1 != NULL)
    {
        *current = createNode(list1->data);
        list1 = list1->next;
        current = &(*current)->next;
    }

    while (list2 != NULL)
    {
        *current = createNode(list2->data);
        list2 = list2->next;
        current = &(*current)->next;
    }

    return mergedList;
}

// Function to print the linked list
void printList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Main function
int main()
{
    struct Node *list1 = NULL;
    struct Node *list2 = NULL;
    int numNode1, numNode2, value;

    printf("Enter the number of nodes for the first linked list: ");
    scanf("%d", &numNode1);

    printf("Enter the values for the first linked list in ascending order:\n");
    for (int i = 0; i < numNode1; ++i)
    {
        scanf("%d", &value);
        insertNode(&list1, value);
    }

    printf("Enter the number of nodes for the second linked list: ");
    scanf("%d", &numNode2);

    printf("Enter the values for the second linked list in ascending order:\n");
    for (int i = 0; i < numNode2; ++i)
    {
        scanf("%d", &value);
        insertNode(&list2, value);
    }

    printf("First Linked List: ");
    printList(list1);

    printf("Second Linked List: ");
    printList(list2);

    struct Node *mergedList = mergeLists(list1, list2);

    printf("Merged Linked List: ");
    printList(mergedList);

    return 0;
}
