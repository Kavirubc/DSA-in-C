#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

//write a function to create a node at the begining of the link list
struct Node *createNodeAtBegining(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    return head;
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
    struct Node *head = NULL, *temp = NULL;

    printf("Input the number of nodes : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Input data for node %d : ", i + 1);
        scanf("%d", &data);

        if (i == 0)
        {
            head = createNode(data);
            temp = head;
        }
        else
        {
            temp->next = createNode(data);
            temp = temp->next;
        }
    }

    displayList(head);


    int j;
    printf("Input data for new node : ");
    scanf("%d", &j);
    head = createNodeAtBegining(head, j);
    
    printf("After inserted in the list : \n");
    displayList(head);




    return 0;
}