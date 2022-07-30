/* Write the following menu driven program for the binary tree
1. Create_BinaryTree_Array (using sequential representation)
2. Create_BinaryTree_Linked (using linked representation)
3. In-Order Traversal
4. Pre-Order Traversal
5. Post-Order traversal */

#include <stdio.h>
#include <malloc.h>

struct tree
{
    int info;
    struct tree *left;
    struct tree *right;
};



void inorder(struct tree *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf(" %d", root->info);
        inorder(root->right);
    }
    return;
}
void postorder(struct tree *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf(" %d", root->info);
    }
    return;
}
void preorder(struct tree *root)
{
    if (root != NULL)
    {
        printf(" %d", root->info);
        preorder(root->left);
        preorder(root->right);
    }
    return;
}

int main(void)
{
    struct tree *root;
    int choice, item, item_no;
    root = NULL;

    do
    {
        do
        {
            printf("\n\t 1. Create Binary Tree using Array ");
            printf("\n\t 2. Create Binary Tree using Linked List ");
            printf("\n\t 3. Inorder traversal of Binary tree");
            printf("\n\t 4. Preorder traversal of Binary tree");
            printf("\n\t 5. Postorder traversal of Binary tree");
            printf("\n\t 6. Exit ");
            printf("\n\t Enter choice : ");
            scanf(" %d", &choice);
            if (choice < 1 || choice > 6)
                printf("\n Invalid choice - try again");
        } while (choice < 1 || choice > 6);
        switch (choice)
        {
        case 1:
            
            break;
        case 2:
            
            break;
        case 3:
            printf("\n Inorder traversal of binary tree is : ");
            inorder(root);
            break;
        case 4:
            printf("\n Preorder traversal of binary tree is : ");
            preorder(root);
            break;
        case 5:
            printf("\n Postorder traversal of binary tree is : ");
            postorder(root);
            break;
        default:
            printf("\n End of program ");
        }
        
    } while (choice != 7);
    return (0);
}