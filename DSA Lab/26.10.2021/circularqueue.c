/* Wap to create circular queue using link list with following operation: 
1. insert at Begining. 2. insert at End. 3. insert at Position. 4. delete at Begining. 5. delete at End. 6. delete at Position. 7. traverse the List
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;
node *rear = NULL;
node *front = NULL;

struct node *delete_position(struct node *front, int insert_index)
{
    if (front == NULL)
    {
        printf("QUEUE UNDERFLOW \n");
    }
    else
    {
        int counter = 0;
        struct node *ptr = front;
        while (counter < insert_index)
        {
            counter++;
            ptr = ptr->next;
        }
        struct node *next_next;
        next_next = ptr->next->next;
        free(ptr->next);
        ptr->next = next_next;
    }
    return front;
}

struct node *delete_end(struct node *front, struct node *rear)
{
    if (front == NULL)
    {
        printf("QUEUE UNDERFLOW \n");
    }
    else
    {
        struct node *ptr;
        ptr = front;
        while (ptr->next != rear)
        {
            ptr = ptr->next;
        }
        ptr->next = front;
        free(rear);
        rear = ptr;
    }
    return front;
}

struct node *delete_begining(struct node *front, struct node *rear)
{
    if (front == NULL)
    {
        printf("QUEUE UNDERFLOW\n");
        return front;
    }
    else
    {
        struct node *ptr;
        ptr = front;
        front = front->next;
        rear->next = front;
        free(ptr);
    }
    return front;
}

struct node *insert_position(struct node *front, int insert_value, int insert_index)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = insert_value;
    if (rear == NULL && insert_index == 0)
    {
        new->next = new;
        front = rear = new;
        printf("NODE CREATED\n");
    }
    else
    {
        struct node *ptr = front;
        int counter = 0;
        while (counter < insert_index)
        {
            counter++;
            ptr = ptr->next;
        }
        new->next = ptr->next;
        ptr->next = new;
    }
    return front;
}

struct node *insert_end(struct node *front, struct node *rear, int insert_value)
{

    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = insert_value;
    if (rear == NULL)
    {
        new->next = new;
        front = rear = new;
        printf("NODE CREATED\n");
    }
    else
    {
        rear->next = new;
        new->next = front;
        rear = new;
        printf("NODE CREATED\n");
    }
    return front;
}

struct node *insert_begining(struct node *front, int insert_value)
{

    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = insert_value;
    if (rear == NULL)
    {
        new->next = new;
        front = rear = new;
        printf("NODE CREATED\n");
    }
    else
    {
        rear->next = new;
        new->next = front;
        front = new;
        printf("NODE CREATED\n");
    }
    return front;
}

int main()
{

    int option = 0;

    while (option != -1)
    {
        printf("1. INSERT AT BEGINNING \n");
        printf("2. INSERT AT END \n");
        printf("3. INSERT AT POSITION \n");
        printf("4. DELETE AT BEGINNING \n");
        printf("5. DELETE AT END \n");
        printf("6. DELETE AT POSITION \n");
        int value, INDEX;
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("ENTER NUMBER YOU WANT TO ENTER: \n");
            scanf("%d", &value);
            front = insert_begining(front, value);
            break;
        case 2:
            printf("ENTER NUMBER YOU WANT TO ENTER: \n");
            scanf("%d", &value);
            insert_end(front, rear, value);
            break;
        case 3:
            printf("ENTER NUMBER YOU WANT TO ENTER: \n");
            scanf("%d", &value);
            printf("ENTER INDEX AFTER WHICH YOU WANT TO ENTER THE NUMBER: \n");
            scanf("%d", &INDEX);
            insert_position(front, value, INDEX);
            break;
        case 4:
            delete_begining(front, rear);
            break;
        case 5:
            delete_end(front, rear);
            break;
        case 6:
            printf("ENTER INDEX AFTER WHICH YOU WANT TO DELETE THE NUMBER: \n");
            scanf("%d", &INDEX);
            delete_position(front, INDEX);
            break;
        }
    }
}