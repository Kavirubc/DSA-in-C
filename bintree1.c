#include <stdio.h>
#include <stdlib.h>

// creating the tree
typedef struct treenode
{
    int value;
    // defining left and right
    struct treenode *left;
    struct treenode *right;
} treenode;

treenode *createnode(int value)
{
    treenode *result = malloc(sizeof(treenode));
    if (result != NULL)
    {
        // if malloc works then assigning NULL to left and right and assigning the given value to value.
        result->left = NULL;
        result->right = NULL;
        result->value = value;
    }
    return result;
}

void printtreee(treenode *root)
{
    if (root == NULL)
    {
        printf("Empty\n");
        return;
    }
    printf("Value = %d\n", root->value);
    // here root->left->value This value has to be added otherwise the memory location will be printed out
    printf("Left = %d\n", root->left->value);
    printf("Right = %d\n", root->right->value);
}

int main()
{
    treenode *n1 = createnode(10);
    treenode *n2 = createnode(11);
    treenode *n3 = createnode(12);
    treenode *n4 = createnode(13);
    treenode *n5 = createnode(14);

    n1->left = n2;
    n1->right = n3;
    n3->left = n4;
    n3->right = n5;

    printtreee(n1);

    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);
}
