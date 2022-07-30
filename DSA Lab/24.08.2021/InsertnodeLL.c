//3.WAP to insert new node i) at beginning ii) end iii) given position in a Linked List

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data_556;
    struct Node *next;
} * head;

void createList(int n)
{
    struct Node *nextNode_556, *temp_556;
    int num_556, i_556;
    head = (struct Node *)malloc(sizeof(struct Node));
    printf(" Enter the data for node 1: ");
    scanf("%d", &num_556);
    head->data_556 = num_556;
    head->next = NULL;
    temp_556 = head;
    for (i_556 = 2; i_556 <= n; i_556++)
    {
        nextNode_556 = (struct Node *)malloc(sizeof(struct Node));
        printf(" Enter the data for node %d : ", i_556);
        scanf(" %d", &num_556);
        nextNode_556->data_556 = num_556;
        nextNode_556->next = NULL;
        temp_556->next = nextNode_556;
        temp_556 = temp_556->next;
    }
}
void insertAtFirst(int userData_556)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data_556 = userData_556;
    ptr->next = head;
    head = ptr;
}
void insertAtEnd(int userData_556)
{
    struct Node *ptr, *p;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data_556 = userData_556;
    ptr->next = NULL;
    p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
}
void insertAtIndex(int userData_556, int index_556)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while (i != index_556 - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data_556 = userData_556;
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
    int n_556, begin_556, mid_556, end_556, index_556;
    printf(" Enter the number of nodes : ");
    scanf("%d", &n_556);
    createList(n_556);
    printf("\nLinked list before insertion\n");
    displayList();
    printf("\nEnter data to be inserted at the beginning:");
    scanf("%d", &begin_556);
    insertAtFirst(begin_556);
    printf("\nLinked list after insertion at the beginning:\n");
    displayList();
    printf("\nEnter data to be inserted at the end:");
    scanf("%d", &end_556);
    insertAtEnd(end_556);
    printf("\nLinked list after insertion at the end:\n");
    displayList();
    printf("\nEnter the index at which data is to be inserted: ");
    scanf("%d", &index_556);
    printf("Enter the data to be inserted at the given index:");
    scanf("%d", &mid_556);
    insertAtIndex(mid_556, index_556);
    printf("\nLinked list after insertion of %d at the %d:\n", mid_556, index_556);
    displayList();

    return 0;
}