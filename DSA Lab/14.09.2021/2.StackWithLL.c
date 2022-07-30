/*
Write a menu driven program to perform the above operations of a stack using linked list
by using suitable user defined functions for each case.
*/
#include <stdio.h>
#include <stdlib.h>
 
struct Node{
    struct Node *prev_556;
    int data;
    struct Node *next_556;
};
 
struct Node *root_556, *top_556 = NULL;
 
int isEmpty(){
    if(top_556 == NULL)
        return 1;
    else
        return 0;
}
 
int isFull(){
 
}
 
void push(int userData){
    struct Node *newNode_556;
    newNode_556 = (struct Node *) malloc (sizeof(struct Node));
    newNode_556->data = userData;
    newNode_556->prev_556 = NULL;
    newNode_556->next_556 = NULL;
 
    if(isEmpty() == 1){
        top_556 = newNode_556;
    }
    else{
        top_556->next_556 = newNode_556;
        newNode_556->prev_556 = top_556;
        top_556 = newNode_556;
    }
}
 
int pop(){
    if(isEmpty() == 1){
        printf("\nStack Underflow!");
        return -1;
    }
    int n_556 = top_556->data;
    top_556 = top_556->prev_556;
    free(top_556->next_556);
    top_556->next_556 = NULL;
    return n_556;
}
 
void display(){
    if(isEmpty() == 1){
        printf("\nStack Underflow!\n");
        return;
    }
    struct Node *temp_556;
    temp_556 = top_556;
    while(temp_556){
        printf("\n%d", temp_556->data);
        temp_556 = temp_556->prev_556;
    }
}
 
int main(){
    int choice_556;
    do{
        printf("\n\n1.Check if the stack is empty \n2.Display the contents of stack \n3.Push \n4.Pop \n5.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice_556);
        switch(choice_556){
            case 1:{
                if(isEmpty() == 1)
                    printf("\nEmpty");
                else
                    printf("\nNot Empty");
                break;
            }
            case 2:{
                display();
                break;
            }
            case 3:{
                int n_556;
                printf("\nEnter the data to be pushed: ");
                scanf("%d", &n_556);
                push(n_556);
                break;
            }
            case 4:{
                printf("\nPopped element = %d", pop());
                break;
            }
            default :{
                printf("\nInvalid choice");
                break;
            }
        }
 
    }while(choice_556 >= 1 && choice_556 <= 4);
    return 0;
}

