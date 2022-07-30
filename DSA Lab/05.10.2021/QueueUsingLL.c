/* Write a menu driven program to implement queue operations such as Enqueue,
 Dequeue, Peek, Display of elements, IsEmpty using linked list.*/

#include <stdio.h>
#include <stdlib.h>
 
struct Node{
    int data556;
    struct Node *next556;
}*front556, *rear556 = NULL;
 
int isEmpty(){
    if(front556 == NULL && rear556 == NULL)
        return 1;
    else
        return 0;
}
 
void enqueue(int value556){
    struct Node *newNode = (struct Node *) malloc (sizeof(struct Node));
    newNode->data556 = value556;
    newNode->next556 = NULL;
    if(isEmpty()){
        front556 = newNode;
        rear556 = newNode;
    }
    else{
        rear556->next556 = newNode;
        rear556 = newNode;
    }
}
 
int dequeue(){
    struct Node *temp = front556;
    int value = front556->data556;
    front556 = front556->next556;
    free(temp);
    return value;
}
 
int peek(){
    return front556->data556;
}
 
void display(){
    if(isEmpty()){
        printf("\nQueue Underflow");
        return;
    }
    int k = 1;
    struct Node *temp556;
    temp556 = front556;
    while(temp556){
        printf("\n%d. %d", k++, temp556->data556);
        temp556 = temp556->next556;
    }
}
 
int main(){
    int choice556;
    do{
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Peek");
        printf("\n4.Display");
        printf("\n5.Is Empty");
        printf("\nEnter Choice: ");
        scanf("%d", &choice556);
        switch(choice556){
            case 1:{
                int value;
                printf("\nEnter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            }
            case 2:{
                int value = dequeue();
                printf("\nDequeued value = %d", value);
                break;
            }
            case 3:{
                int value = peek();
                printf("\nPeeked value = %d", value);
                break;
            }
            case 4:{
                printf("\nDisplaying queue: ");
                display();
                break;
            }
            case 5:{
                if(isEmpty())
                    printf("\nQueue Empty!");
                else
                    printf("\nQueue not Empty!");
                break;
            }
            default :{
                printf("\nInvalid Choice!");
            }
        }  
    }while(choice556 >=1 && choice556 <= 5);
}
