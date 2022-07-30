/* WAP using a function to reverse a queue by using stack.*/

#include <stdio.h>
#include <stdlib.h>
 
struct NodeStack{
    struct NodeStack *prev556;
    int data556;
    struct NodeStack *next556;
};
 
struct NodeStack *root556, *top556 = NULL;
 
int isEmptyStack(){
    if(top556 == NULL)
        return 1;
    else
        return 0;
}
 
void push(int userData556){
    struct NodeStack *newNode556;
    newNode556 = (struct NodeStack *) malloc (sizeof(struct NodeStack));
    newNode556->data556 = userData556;
    newNode556->prev556 = NULL;
    newNode556->next556 = NULL;
 
    if(isEmptyStack() == 1){
        top556 = newNode556;
    }
    else{
        top556->next556 = newNode556;
        newNode556->prev556 = top556;
        top556 = newNode556;
    }
}
 
int pop(){
    if(isEmptyStack() == 1){
        printf("\nStack Underflow!");
        return -1;
    }
    if(top556->prev556 == NULL){
        int n = top556->data556;
        top556 = NULL;
        return n;
    }
    else{
        int n = top556->data556;
        top556 = top556->prev556;
        free(top556->next556);
        top556->next556 = NULL;
        return n;
    }
}
 
struct NodeQueue{
    int data556;
    struct NodeQueue *next;
}*front556, *rear = NULL;
 
int isEmptyQueue(){
    if(front556 == NULL && rear == NULL)
        return 1;
    else
        return 0;
}
 
void enqueue(int value556){
    struct NodeQueue *newNode556 = (struct NodeQueue *) malloc (sizeof(struct NodeQueue));
    newNode556->data556 = value556;
    newNode556->next = NULL;
    if(isEmptyQueue()){
        front556 = newNode556;
        rear = newNode556;
    }
    else{
        rear->next = newNode556;
        rear = newNode556;
    }
}
 
int dequeue(){
    struct NodeQueue *temp556 = front556;
    int value = front556->data556;
    front556 = front556->next;
    free(temp556);
    return value;
}
 
int peek(){
    return front556->data556;
}
 
void display(){
    if(isEmptyQueue()){
        printf("\nQueue Underflow");
        return;
    }
    int k = 1;
    struct NodeQueue *temp;
    temp = front556;
    while(temp){
        printf("\n%d. %d", k++, temp->data556);
        temp = temp->next;
    }
}
 
void reverse(){
    while(front556){
        push(dequeue());
    }
    front556 = NULL;
    rear = NULL;
    while(top556){
        enqueue(pop());
    }
}
 
int main(){
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    enqueue(9);
    display();
    printf("\n");
    reverse();
    display();
 
}
 
 
 

