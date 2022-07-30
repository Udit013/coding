//q1
/* WAP using C
I. To create a BST 
II. Delete the leaf node and print it .
III. Delete a node which has only one child and readjust the BST
IV. Delete the node whose degree is 2 and display the deleted node,
   it's inorder predecessor and inorder successor and display all 
   nodes in Inorder traversal after readjustment of BST */

#include <stdio.h>
#include <stdlib.h>
 
struct btnode
{
    int value;
    struct btnode *l;
    struct btnode *r;
}*root = NULL, *temp = NULL, *t2, *t1;
 
void delete1();
void insert();
void delete();
void create();
void search(struct btnode *t);
void search1(struct btnode *t,int data);
int smallest(struct btnode *t);
int largest(struct btnode *t);
void printLevelOrder(struct btnode *root);
void printCurrentLevel(struct btnode *root, int level);
int height(struct btnode *node);
int flag = 1;
 
int main()
{
    int ch;
 
    printf("\nOPERATIONS ---");
    printf("\n1- insert\n");
    printf("2- delete\n");
    printf("3- level order\n");
    printf("4- exit\n");
    while(1)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:    
            insert();
            break;
        case 2:    
            delete();
            break;
        case 3:    
            printLevelOrder(root);
            break;
        case 4:
            exit(0);
        default :     
            printf("Wrong choice, Please enter correct choice ");
            break;    
        }
    }
}
void insert()
{
    create();
    if (root == NULL) 
        root = temp;
    else    
        search(root);    
}
 
void create()
{
    int data;
 
    printf("Enter data of node to be inserted : ");
    scanf("%d", &data);
    temp = (struct btnode *)malloc(1*sizeof(struct btnode));
    temp->value = data;
    temp->l = temp->r = NULL;
}
 
void search(struct btnode *t)
{
    if ((temp->value > t->value) && (t->r != NULL)) 
    /* value more than root node value insert at right */
        search(t->r);
    else if ((temp->value > t->value) && (t->r == NULL))
        t->r = temp;
    else if ((temp->value < t->value) && (t->l != NULL)) 
    /* value less than root node value insert at left */
        search(t->l);
    else if ((temp->value < t->value) && (t->l == NULL))
        t->l = temp;
}

 
void delete()
{
    int data;
 
    if (root == NULL)
    {
        printf("No elements in a tree to delete");
        return;
    }
    printf("Enter the data to be deleted : ");
    scanf("%d", &data);
    t1 = root;
    t2 = root;
    search1(root, data);
}
 
void search1(struct btnode *t, int data)
{
    if ((data>t->value))
    {
        t1 = t;
        search1(t->r, data);
    }
    else if ((data < t->value))
    {
        t1 = t;
        search1(t->l, data);
    }
    else if ((data==t->value))
    {
        delete1(t);
    }
}
 
void delete1(struct btnode *t)
{
    int k;
 
    /* To delete leaf node */
    if ((t->l == NULL) && (t->r == NULL))
    {
        if (t1->l == t)
        {
            t1->l = NULL;
        }
        else
        {
            t1->r = NULL;
        }
        t = NULL;
        free(t);
        return;
    }
 
    /* To delete node having one left hand child */
    else if ((t->r == NULL))
    {
        if (t1 == t)
        {
            root = t->l;
            t1 = root;
        }
        else if (t1->l == t)
        {
            t1->l = t->l;
 
        }
        else
        {
            t1->r = t->l;
        }
        t = NULL;
        free(t);
        return;
    }
 
    /* To delete node having right hand child */
    else if (t->l == NULL)
    {
        if (t1 == t)
        {
            root = t->r;
            t1 = root;
        }
        else if (t1->r == t)
            t1->r = t->r;
        else
            t1->l = t->r;
        t == NULL;
        free(t);
        return;
    }
 
    /* To delete node having two child */
    else if ((t->l != NULL) && (t->r != NULL))  
    {
        t2 = root;
        if (t->r != NULL)
        {
            k = smallest(t->r);
            flag = 1;
        }
        else
        {
            k =largest(t->l);
            flag = 2;
        }
        search1(root, k);
        t->value = k;
    }
 
}
 
int smallest(struct btnode *t)
{
    t2 = t;
    if (t->l != NULL)
    {
        t2 = t;
        return(smallest(t->l));
    }
    else    
        return (t->value);
}
 
int largest(struct btnode *t)
{
    if (t->r != NULL)
    {
        t2 = t;
        return(largest(t->r));
    }
    else    
        return(t->value);
}
void printLevelOrder(struct btnode *root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
        printCurrentLevel(root, i);
}
void printCurrentLevel(struct btnode *root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->value);
    else if (level > 1) {
        printCurrentLevel(root->l, level - 1);
        printCurrentLevel(root->r, level - 1);
    }
}

int height(struct btnode *node)
{
    if (node == NULL)
        return 0;
    else {
        int lheight = height(node->l);
        int rheight = height(node->r);
 
        if (lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }
}

