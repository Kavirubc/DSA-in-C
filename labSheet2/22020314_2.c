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

// Function to delete a node from the linked list
void deleteNode(struct Node **head, int key)
{
    struct Node *tem = *head, *pre = NULL;

    // If the node to be deleted is the head
    if (tem != NULL && tem->data == key)
    {
        *head = tem->next;
        free(tem);
        return;
    }

    // Search for the node to be deleted
    while (tem != NULL && tem->data != key)
    {
        pre = tem;
        tem = tem->next;
    }

    // If the node with the given key is not present
    if (tem == NULL)
    {
        printf("Node with data %d not found in the list.\n", key);
        return;
    }

    // Unlink the node from the linked list
    pre->next = tem->next;

    // Free the memory of the deleted node
    free(tem);
}

// Function to print the linked list
void printList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Main function
int main()
{
    struct Node *head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    printf("Initial Linked List: ");
    printList(head);

    int key;
    printf("Delete Node: ");
    scanf("%d", &key);

    deleteNode(&head, key);

    printf("Final Linked List after deleting node with value %d: ", key);
    printList(head);

    return 0;
}
