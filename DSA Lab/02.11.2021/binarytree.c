/* WAP to find the height of a binary tree and to 
display the total no of nodes in a binary tree using recursion. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
struct BinaryTreeNode
{
    int data;
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
};
struct BinaryTreeNode *createNode(int key)
{
    struct BinaryTreeNode *new_node = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
    new_node->data = key;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
struct BinaryTreeNode *createBinaryTree_LL()
{
    int root_data;
    printf("ENTER -1 TO FOR NULL \n");
    printf("\nENTER DATA: ");
    scanf("%d", &root_data);
    if (root_data == -1)
    {
        return NULL;
    }
    struct BinaryTreeNode *root = createNode(root_data);
    root->left = createBinaryTree_LL(root->left);
    root->right = createBinaryTree_LL(root->right);
    return root;
}
int getheight(struct BinaryTreeNode *root)
{
    if (root == NULL)
    {
        return INT_MIN;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }
    int left_height = getheight(root->left);
    int right_height = getheight(root->right);
    if (left_height >= right_height)
    {
        return left_height + 1;
    }
    return right_height + 1;
}
int countnodes(struct BinaryTreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left_node_count = countnodes(root->left);
    int right_node_count = countnodes(root->right);
    return left_node_count + right_node_count + 1;
}
int main()
{
    struct BinaryTreeNode *root = NULL;
    root = createBinaryTree_LL();
    int height = getheight(root);
    printf("the height of the binary tree is :%d\n", height);
    int nodecount = countnodes(root);
    printf("the number of nodes in the binary tree is :%d\n", nodecount);
    return 0;
}