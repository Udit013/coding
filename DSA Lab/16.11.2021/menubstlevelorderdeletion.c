/*1.WAP using C
To create a BST 
Display the elements using Level order Traversal 
Delete the leaf node and print it .
Delete a node which has only one child and readjust the BST
Delete the node whose degree is 2 and display the deleted node,
it’s inorder predecessor and inorder successor and display all 
nodes in Inorder traversal after readjustment of BST 
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
struct node** createQueue(int*, int*);
void enQueue(struct node**, int*, struct node*);
struct node* deQueue(struct node**, int*);
struct node *getnode(int val)
{
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->key=val;
    new->left=NULL;
    new->right=NULL;
    return new;
}
struct node *insert(struct node *root,int val)
{
    if(root==NULL)
        return getnode(val);
    else if(val<root->key)
        root->left=insert(root->left,val);
    else if(val>root->key)
        root->right=insert(root->right,val);
    return root;
}
void level_order(struct node* root)
{
    int rear,front;
    struct node **queue=createQueue(&front,&rear);
    struct node* temp=root;
    while(temp) 
    {
        printf("%d ",temp->key);
        if(temp->left)
            enQueue(queue,&rear,temp->left);
        if(temp->right)
            enQueue(queue,&rear,temp->right);
        temp=deQueue(queue,&front);
    }
}
struct node **createQueue(int *front,int *rear)
{
    struct node **queue=(struct node**)malloc(sizeof(struct node*) *500);
    *front=*rear=0;
    return queue;
}
 
void enQueue(struct node **queue,int *rear,struct node *new)
{
    queue[*rear]=new;
    (*rear)++;
}
 
struct node *deQueue(struct node **queue,int *front)
{
    (*front)++;
    return queue[*front-1];
}
int getRightMin(struct node *root)
{
    struct node *temp=root;
    while(temp->left!=NULL)
    { 
        temp=temp->left;
    }

    return temp->key;
}

struct node *removeNode(struct node *root,int val)
{
    if(root==NULL)
        return NULL;
    if(root->key<val)
        root->right=removeNode(root->right,val);
    else if(root->key>val)
        root->left=removeNode(root->left,val);
    else
    {
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
            return NULL;
        }
        else if(root->left==NULL)
        {
            struct node *temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            struct node *temp=root->left;
            free(root);
            return temp;
        }
        else
        {
            int rightMin=getRightMin(root->right);
            root->key=rightMin;
            root->right=removeNode(root->right,rightMin);
        }

    }
    return root;
}
int main()
{
    int option,val;
    do
    {
        printf("\n ----- MENU -----");
        printf("\n 1-> Insert element in the BST.");
        printf("\n 2-> Display the elements using Level-order Traversal.");
        printf("\n 3-> Delete node with degree 0,1,2 and display it.");
        printf("\n 0-> QUIT.");
        printf("\n Enter choice: ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                printf("\n Enter the element in the bst : ");
                scanf("%d",&val);
                root=insert(root,val);
                break;
            case 2:
                printf("\n Display the elements using Level-Order Traversal: ");
                level_order(root);
                break;
            case 3:
                printf("\n Delete a node with one or two or zero child : ");
                printf("\n Enter the element you want to delete: ");
                scanf("%d",&val);
                removeNode(root,val);
                break;
        }
    }while(option!=0);
    return 0;
}