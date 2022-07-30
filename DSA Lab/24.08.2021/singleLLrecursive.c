/*
2.wap to create a single linked list and display the value of each node
 (ATLEAST 5) using recursive function.
*/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data_556;
    struct Node *next;
} * head;

void createList(int n)
{
    struct Node *nextNode, *temp;
    int num_556, i_556;
    head = (struct Node *)malloc(sizeof(struct Node));
    printf(" Input the data for node 1: ");
    scanf("%d", &num_556);
    head->data_556 = num_556;
    head->next = NULL;
    temp = head;
    for (i_556 = 2; i_556 <= n; i_556++)
    {
        nextNode = (struct Node *)malloc(sizeof(struct Node));
        printf(" Input the data for node %d : ", i_556);
        scanf(" %d", &num_556);
        nextNode->data_556 = num_556;
        nextNode->next = NULL;
        temp->next = nextNode;
        temp = temp->next;
    }
}
void display(struct Node *ptr_556)
{
    if (ptr_556 == NULL)
        return;
    else
    {
        printf("%d\n", ptr_556->data_556);
        display(ptr_556->next);
    }
}
int main()
{
    int n_556;
    printf("\n Enter the number of nodes : ");
    scanf("%d", &n_556);
    createList(n_556);
    printf("\n Data entered in the list : \n");
    display(head);
    return 0;
}