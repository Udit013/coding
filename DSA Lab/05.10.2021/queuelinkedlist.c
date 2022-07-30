/* Write a menu driven program to implement queue operations such as Enqueue, Dequeue, Peek, 
Display of elements, IsEmpty using linked list. */

#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

int isEmpty(struct queue *q)
{
    if (q->rear == q->front)
    {
        return 1;
    }
    return 0;
}

int isFull(struct queue *q)
{
    if (q->rear == q->size - 1)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("This Queue is full\n");
    }
    else
    {
        q->rear++;
        q->arr[q->rear] = val;
        printf("Enqued element: %d\n", val);
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("This Queue is empty\n");
    }
    else
    {
        q->front++;
        a = q->arr[q->front];
    }
    return a;
}

void display(struct queue *q)
{

    if (isEmpty(q))
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = 0; i <= q->rear; i++)
            printf("%d ", q->arr[i]);
        printf("\n");
    }
}

int main()
{
    struct queue q;
    int value;
    q.size = 100;
    q.front = q.rear = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    int choice;

    printf("Enter -1 to quit\n ");
    while (choice != -1)
    {
        printf("Enter 1 to perform enqueue\n ");
        printf("Enter 2 to perform dequeue\n ");
        printf("Enter 3 to perform Display\n ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter the value you want ot enqueue\n");
            scanf("%d", &value);
            enqueue(&q, value);
            break;
        case 2:
            dequeue(&q);
            break;
        case 3:
            display(&q);
            break;
        }
    }
}