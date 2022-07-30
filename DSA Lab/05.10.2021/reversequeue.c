/* WAP using a function to reverse a queue by using stack. */

#include <stdio.h>
#include <stdlib.h>

int front = -1, rear = -1;
int queue[50];

void enqueue(int data, int l) 
{
    if (rear == l - 1)
    {
        printf("Queue is full");
    }
    else if ((front == -1) && (rear == -1))
    {
        front = rear = 0;
        queue[rear] = data;
    }
    else
    {
        rear++;
        queue[rear] = data;
    }
}
void print() 
{
    int i;
    for (i = front; i <= rear; i++)
    {
        printf("\n%d", queue[i]);
    }
}
void reverse() 
{
    int i, j, t;
    for (i = front, j = rear; i < j; i++, j--)
    {
        t = queue[i];
        queue[i] = queue[j];
        queue[j] = t;
    }
}
void main()
{
    int n, i = 0, t;
    printf("Enter the size of Queue : ");
    scanf("%d", &n);
    printf("\nEnter the data for Queue : ");
    while (i < n)
    {
        scanf("%d", &t);
        enqueue(t, n);
        i++;
    }
    printf("\nQueue which you have entered :- ");
    print();
    reverse();
    printf("\nQueue after reversing :- ");
    print();
}