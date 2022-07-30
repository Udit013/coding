#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data_556;
    struct Node *next;
} *head;

void createList(int n)
{
    struct Node *nextNode, *temp;
    int num, i;
    head = (struct Node *)malloc(sizeof(struct Node));
    printf(" Enter the data for node 1: ");
    scanf("%d", &num);
    head->data_556 = num;
    head->next = NULL;
    temp = head;
    for (i = 2; i <= n; i++)
    {
        nextNode = (struct Node *)malloc(sizeof(struct Node));
        printf(" Enter the data for node %d : ", i);
        scanf(" %d", &num);
        nextNode->data_556 = num;
        nextNode->next = NULL;
        temp->next = nextNode;
        temp = temp->next;
    }
}
void insertAtFirst(int userData)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data_556 = userData;
    ptr->next = head;
    head = ptr;
}
void insertAtEnd(int userData)
{
    struct Node *ptr, *p;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data_556 = userData;
    ptr->next = NULL;
    p = head;
    while(p->next != NULL){
        p = p->next;
    }
    p->next = ptr;
}
void insertAtIndex( int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data_556 = data;
    ptr->next = p->next;
    p->next = ptr;
}
void displayList()
{    
    struct Node *ptr;
    ptr = head;
    printf("\n Data entered in the list : \n");
    while (ptr != NULL)
    {
        printf(" Element: %d\n", ptr->data_556);
        ptr = ptr->next;
    }
}
int main()
{
    int n,begin,mid,end,index;
    printf(" Enter the number of nodes : ");
    scanf("%d", &n);
    createList(n);
    printf("\nLinked list before insertion\n");
    displayList();
    printf("\nEnter data to be inserted at the beginning:");
    scanf("%d", &begin);
    insertAtFirst(begin);
    printf("\nLinked list after insertion at the beginning:\n");
    displayList();
    printf("\nEnter data to be inserted at the end:");
    scanf("%d", &end);
    insertAtEnd(end);
    printf("\nLinked list after insertion at the end:\n");
    displayList();
    printf("\nEnter the index at which data is to be inserted: ");
    scanf("%d",&index);
    printf("Enter the data to be inserted at the given index:");
    scanf("%d",&mid);
    insertAtIndex(mid, index);
    printf("\nLinked list after insertion of %d at the %d:\n", mid, index);
    displayList();

    return 0;
}