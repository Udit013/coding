/*
1.wap to create a single linked list and display the value of each node
 (ATLEAST 5) using user defined create and display function
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
    printf(" Enter the data for node 1: ");
    scanf("%d", &num_556);
    head->data_556 = num_556;
    head->next = NULL;
    temp = head;
    for (i_556 = 2; i_556 <= n; i_556++)
    {
        nextNode = (struct Node *)malloc(sizeof(struct Node));
        printf(" Enter the data for node %d : ", i_556);
        scanf(" %d", &num_556);
        nextNode->data_556 = num_556;
        nextNode->next = NULL;
        temp->next = nextNode;
        temp = temp->next;
    }
}

void displayList()
{
    struct Node *ptr_556;
    ptr_556 = head;
    while (ptr_556 != NULL)
    {
        printf(" Element: %d\n", ptr_556->data_556);
        ptr_556 = ptr_556->next;
    }
}
int main()
{
    int n_556;
    printf(" Enter the number of nodes : ");
    scanf("%d", &n_556);
    createList(n_556);
    printf("\n Data entered in the list : \n");
    displayList();
    return 0;
}