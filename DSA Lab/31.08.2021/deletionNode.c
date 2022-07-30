#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} * head;

void displayList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}
struct Node *deleteAtLast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
int main()
{
    int n;
    printf(" Enter the number of nodes : ");
    scanf("%d", &n);
    struct Node *nextNode, *temp;
    int num, i;
    head = (struct Node *)malloc(sizeof(struct Node));
    printf(" Enter the data for node 1: ");
    scanf("%d", &num);
    head->data = num;
    head->next = NULL;
    temp = head;
    for (i = 2; i <= n; i++)
    {
        nextNode = (struct Node *)malloc(sizeof(struct Node));
        printf(" Enter the data for node %d : ", i);
        scanf(" %d", &num);
        nextNode->data = num;
        nextNode->next = NULL;
        temp->next = nextNode;
        temp = temp->next;
    }
    int choice;
    do
    {
        printf("\n\n1.Display");
        printf("\n2.Delete element at beginning");
        printf("\n3.Delete element at any address");
        printf("\n4.Delete element at end");
        printf("\n5.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("\nLinked list before deletion\n");
            displayList(head);
            break;
        }
        case 2:
        {
            head = deleteFirst(head);

            printf("\nLinked list after deletion of 1st element\n");
            displayList(head);
            break;
        }
        case 3:
        {
            int index;
            printf("\nEnter the index at which you want to delete:");
            scanf("%d", &index);
            head = deleteAtIndex(head, index);
            printf("\nLinked list after deletion of element at %d\n", index);
            displayList(head);
            break;
        }
        case 4:
        {
            head = deleteAtLast(head);
            printf("\nLinked list after deletion of last element\n");
            displayList(head);

            break;
        }
        default:
            printf("\nExiting...");
            break;
        }
    } while (choice >= 1 && choice <= 5);
    return 0;
}
