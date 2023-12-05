#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertNode(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct Node *tem = *head;
        while (tem->next != NULL)
        {
            tem = tem->next;
        }
        tem->next = newNode;
    }
}

// Reverse
void reverseList(struct Node **head)
{
    struct Node *prev = NULL, *current = *head, *next;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

// Print
void printList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;
    int numNodes, value;

    printf("Input the number of nodes: ");
    scanf("%d", &numNodes);

    printf("Enter the values for the linked list:\n");
    for (int i = 0; i < numNodes; ++i)
    {
        scanf("%d", &value);
        insertNode(&head, value);
    }

    printf("The Initial Linked List: ");
    printList(head);

    reverseList(&head);

    printf("The Reversed Linked List: ");
    printList(head);

    return 0;
}
