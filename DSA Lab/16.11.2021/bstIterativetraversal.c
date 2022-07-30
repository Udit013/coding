/* 2.WAP to create a Binary Tree and display all the nodes using Iterative 
Version of all types of traversals using Stack data structure.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *right;
    struct Node *left;
};

struct Stack
{
    int size;
    int top;
    struct Node **array;
};

struct Node *newNode(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->val = data;
    node->left = node->right = NULL;
    return node;
}

struct Stack *createStack(int size)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->size = size;
    stack->top = -1;
    stack->array = (struct Node **)malloc(stack->size * sizeof(struct Node *));
    return stack;
}

int isFull(struct Stack *stack)
{
    return stack->top - 1 == stack->size;
}

int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

void push(struct Stack *stack, struct Node *node)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = node;
}

struct Node *pop(struct Stack *stack)
{
    if (isEmpty(stack))
        return NULL;
    return stack->array[stack->top--];
}

struct Node *peek(struct Stack *stack)
{
    if (isEmpty(stack))
        return NULL;
    return stack->array[stack->top];
}

struct Node *new_Node(int x)
{
    struct Node *Temp;
    Temp = (struct Node *)malloc(sizeof(struct Node));
    Temp->val = x;
    Temp->left = NULL;
    Temp->right = NULL;
    return Temp;
}

void iterativePreorder(struct Node *root)
{
    if (root == NULL)
        return;

    struct Stack *nodeStack = createStack(100);

    push(nodeStack, root);

    while (isEmpty(nodeStack) == 0)
    {
        struct Node *Node = peek(nodeStack);
        printf("%d ", Node->val);
        pop(nodeStack);

        if (Node->right)
            push(nodeStack, Node->right);
        if (Node->left)
            push(nodeStack, Node->left);
    }
}

struct Node *insert(struct Node *root, int x)
{
    if (root == NULL)
        return new_Node(x);
    else if (x > root->val)
        root->right = insert(root->right, x);
    else
        root->left = insert(root->left, x);
    return root;
}

void inOrder(struct Node *root)
{
    struct Node *current = root;
    struct Stack *s = createStack(100);

    int done = 0;
    while (!done)
    {

        if (current != NULL)
        {
            push(s, current);
            current = current->left;
        }
        else
        {
            if (!isEmpty(s))
            {
                current = pop(s);
                printf("%d ", current->val);

                current = current->right;
            }
            else
                done = 1;
        }
    }
}

void postOrderIterative(struct Node *root)
{
    if (root == NULL)
        return;

    struct Stack *stack = createStack(100);
    do
    {
        while (root)
        {
            if (root->right)
                push(stack, root->right);
            push(stack, root);

            root = root->left;
        }

        root = pop(stack);

        if (root->right && peek(stack) == root->right)
        {
            pop(stack);
            push(stack, root);
            root = root->right;
        }
        else
        {
            printf("%d ", root->val);
            root = NULL;
        }
    } while (!isEmpty(stack));
}

int main()
{
    struct Node *root;
    root = NULL;
    int c = 0;
    int temp = 0;
    while (1)
    {
        printf("1 - Insert a Node in BST.\n");
        printf("2 - In-Order Traversal of BST.\n");
        printf("3 - Pre-Order Traversal of BST.\n");
        printf("4 - Post-Order Traversal of BST.\n");
        printf("5 - Exit.\n");
        printf("Enter your choice : ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("Enter value of Node to Insert in BST : ");
            scanf("%d", &temp);
            root = insert(root, temp);
            printf("Insertion Done.\n");
            break;
        case 2:
            printf("In-Order Traversal of BST - \n");
            inOrder(root);
            printf("\n");
            break;
        case 3:
            printf("Pre-Order Traversal of BST - \n");
            iterativePreorder(root);
            printf("\n");
            break;
        case 4:
            printf("Post-Order Traversal of BST - \n");
            postOrderIterative(root);
            printf("\n");
            break;
        case 5:
            printf("Code Exited.\n");
            exit(1);
        default:
            printf("Wrong Choice, Try again!\n");
        }
    }
    return 0;
}