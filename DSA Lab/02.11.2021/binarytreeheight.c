/* 1. WAP to find the height of a binary tree and to display
the total no of nodes in a binary tree using recursion. */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newNode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
};

int height(struct node *node)
{
    if (node == NULL)
        return 0;
    else
    {
        int left_side;
        int right_side;
        left_side = height(node->left);
        right_side = height(node->right);
        if (left_side > right_side)
        {
            return left_side + 1;
        }
        else
            return right_side + 1;
    }
}

void insertNode(struct node *root, int n1, int n2, char lr)
{
    if (root == NULL)
        return;
    if (root->data == n1)
    {
        switch (lr)
        {
        case 'l':
            root->left = newNode(n2);
            break;
        case 'r':
            root->right = newNode(n2);
            break;
        }
    }
    else
    {
        insertNode(root->left, n1, n2, lr);
        insertNode(root->right, n1, n2, lr);
    }
}

void inorder(struct node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main()
{
    struct node *root = NULL;
    int n;
    scanf("%d", &n);
    while (n)
    {
        char lr;
        int n1, n2;
        scanf("%d", &n1);
        scanf("%d", &n2);
        scanf("%c", &lr);
        if (root == NULL)
        {
            root = newNode(n1);
            switch (lr)
            {
            case 'l':
                root->left = newNode(n2);
                break;
            case 'r':
                root->right = newNode(n2);
                break;
            }
        }
        else
        {
            insertNode(root, n1, n2, lr);
        }
    }
    inorder(root);
    printf("\n");
    printf("\nHeight of binary tree : %d", height(root));
    printf("\n");
    return 0;
}