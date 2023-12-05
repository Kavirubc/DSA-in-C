#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// newNode at the begining
struct Node *nodeFront(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    return head;
}

// newNode at the end
struct Node *nodeEnd(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    struct Node *tem = head;
    while (tem->next != NULL)
    {
        tem = tem->next;
    }
    tem->next = newNode;

    return head;
}
// count the number oof nodes in the list
int countNodes(struct Node *head)
{
    int count = 0;
    struct Node *tem = head;
    while (tem != NULL)
    {
        count++;
        tem = tem->next;
    }

    return count;
}

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void displayList(struct Node *node)
{
    while (node != NULL)
    {
        printf("Data = %d\n", node->data);
        node = node->next;
    }
    printf("\n");
}

int main()
{
    int n, i, data;
    struct Node *head = NULL, *tem = NULL;

    printf("Input the number of nodes : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Input data for node %d : ", i + 1);
        scanf("%d", &data);

        if (i == 0)
        {
            head = createNode(data);
            tem = head;
        }
        else
        {
            tem->next = createNode(data);
            tem = tem->next;
        }
    }

    displayList(head);

    int j;
    printf("Input data for new node at the front : ");
    scanf("%d", &j);
    head = nodeFront(head, j);

    printf("After inserted in the list : \n");
    displayList(head);

    int k;
    printf("Input data for new node at the end : ");
    scanf("%d", &k);
    head = nodeEnd(head, k);

    printf("After inserted in the list: \n");
    displayList(head);

    int y = countNodes(head);

    printf("Number of nodes in the list : %d\n", y);

    return 0;
}