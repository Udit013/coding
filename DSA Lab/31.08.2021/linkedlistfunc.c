#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void createList(int A[], int n)
{
    struct node *temp, *last;
    int i;

    head = (struct node *)malloc(sizeof(struct node));
    head->data = A[0];
    head->next = NULL;
    last = head;
    for (i = 1; i < n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
void displayRecursion(struct node *temp)
{
    printf("%d ", temp->data);
    if (temp->next == NULL)
    {
        return;
    }
    displayRecursion(temp->next);
}
void displayIteration(struct node *temp)
{
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int lengthRecursive(struct node *temp)
{
    if (temp->next == NULL)
    {
        return 1;
    }
    return lengthRecursive(temp->next) + 1;
}
int lengthIteration(struct node *temp)
{
    int s = 0;
    while (temp)
    {
        s++;
        temp = temp->next;
    }
    return s;
}
int sumRecursive(struct node *temp)
{
    if (temp == NULL)
    {
        return 0;
    }
    return sumRecursive(temp->next) + temp->data;
}
int sumIteration(struct node *temp)
{
    int s = 0;
    while (temp)
    {
        s += temp->data;
        temp = temp->next;
    }
    return s;
}

int main()
{
    int len;
    printf("\nEnter the number of elements: ");
    scanf("%d", &len);
    int *arr;
    arr = (int *)malloc(len * sizeof(int));
    printf("\nEnter the elements:\n");
    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);
    printf("\n");
    createList(arr, len);

    printf(" the elements of linked list : \n");
    displayRecursion(head);
    printf("\n  the elements of linked list using iteration : \n");
    displayIteration(head);
    printf("\n  the length of linked list using recursion : %d \n", lengthRecursive(head));
    printf("\n  the length of linked list using recursion : %d \n", lengthIteration(head));
    printf("\n  the sum of linked list using recursion : %d \n", sumRecursive(head));
    printf("\n  the sum of linked list using recursion : %d \n", sumIteration(head));
    return 0;
}