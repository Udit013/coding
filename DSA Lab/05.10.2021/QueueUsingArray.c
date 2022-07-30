/*Write a menu driven program to implement queue operations such as Enqueue,
 Dequeue, Peek, Display of elements, IsEmpty, IsFull using static array.*/

#include <stdio.h>
#include <stdlib.h>
 
struct Queue{
    int size556;
    int front556;
    int rear556;
    int *arr556;
}q556;
 
void initialize(){
    printf("\nEnter the size of queue: ");
    int size556;
    scanf("%d", &size556);
    q556.size556 = size556;
    q556.arr556 = (int *)malloc(sizeof(int));
    q556.front556 = q556.rear556 = -1;
}
 
int isEmpty(){
    if(q556.front556 == q556.rear556)
        return 1;
    else
        return 0;
}
 
int isFull(){
    if(q556.rear556 == q556.size556-1)
        return 1;
    else
        return 0;
}
 
void enqueue(int value556){
    if(isFull()){
        printf("\nQueue Overflow!");
        return;
    }
    else{
        q556.arr556[++q556.rear556] = value556;
    }
}
 
int dequeue(){
    if(isEmpty()){
        printf("\nQueue Underflow!");
        return 8888;
    }
    else{
        return(q556.arr556[++q556.front556]);
    }
}
 
int peek(){
    if(isEmpty()){
        printf("\nQueue Underflow!");
        return 8888;
    }
    else{
        return(q556.arr556[q556.front556+1]);
    }
}
 
void display(){
    int k = 1;
    for(int i = q556.front556+1; i <= q556.rear556; i++){
        printf("\n%d. %d", k++, q556.arr556[i]);
    }
}
 
int main(){
    initialize();
    int choice556;
    do{
        printf("\n\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Peek");
        printf("\n4.Display");
        printf("\n5.Is Empty");
        printf("\n6.Is Full");
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
            case 6:{
                if(isFull())
                    printf("\nQueue Full!");
                else
                    printf("\nQueue not Full!");
                break;
            }
            default :{
                printf("\nInvalid Choice!");
            }
        }  
    }while(choice556 >=1 && choice556 <= 6);
}
