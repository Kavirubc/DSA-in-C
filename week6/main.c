#include <stdio.h>
#include <stdlib.h>
#include "Funcs.h"

int main()
{
    Node *head = NULL;
    int num, data;

    printf("Enter the number of initial nodes: ");
    scanf("%d", &num);
    for (int i = 0; i < num; ++i)
    {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        Node *newNode = createNode(data);
        if (i == 0)
        {
            head = newNode;
        }
        else
        {
            insertAtEnd(&head, data);
        }
    }

    // Insert at the beginning
    printf("Enter data to insert at beginning: ");
    scanf("%d", &data);
    insertAtBeginning(&head, data);

    // Insert at the end
    printf("Enter data to insert at end: ");
    scanf("%d", &data);
    insertAtEnd(&head, data);

    // Delete a node
    printf("Enter data of the node to delete: ");
    scanf("%d", &data);
    deleteNode(&head, data);

    printLinkedList(head);

    printf("Enter data to search: ");
    scanf("%d", &data);
    Node *found = searchNode(head, data);
    if (found != NULL)
    {
        printf("Node with data %d found.\n", found->data);
    }
    else
    {
        printf("Node not found.\n");
    }

    return 0;
}
