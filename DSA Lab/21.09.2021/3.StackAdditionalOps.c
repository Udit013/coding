/*
Write a menu driven program to perform the following operations of a stack using array 
by using suitable user defined functions for each case.
a) Check if the stack is empty b) Display the contents of stack c) Push d) Pop
*/
#include <stdio.h>
#include <stdlib.h>

int *stack;
int top;
int size;

int isFull(){
    if(top == size - 1)
        return 1;
    else
        return 0;
}

int isEmpty(){
    if(top == -1)
        return 1;
    else
        return 0;
}

void initialize(){
    printf("\nEnter size of stack: ");
    scanf("%d", &size);
    stack = (int *) malloc (size * sizeof(int));
    top = -1;
}

void push(int userData){
    if(isFull() == 1){
        printf("\nStack Overflow!\n");
        return;
    }
    else{
        stack[++top] = userData;
    }
}

int pop(){
    if(isEmpty() == 1){
        printf("\nStack Underflow!\n");
        return -8888;
    }
    return stack[top--];
}

int peekHighestElement(){
    if(isEmpty() == 1){
        printf("\nStack Underflow!\n");
        return -8888;
    }
    return stack[top];
}

int peekLowestElement(){
    if(isEmpty() == 1){
        printf("\nStack Underflow!\n");
        return -8888;
    }
    return stack[0];
}

int peekMiddleElement(){
    if(isEmpty() == 1){
        printf("\nStack Underflow!\n");
        return -8888;
    }
    return stack[size/2 + 1];
}

void display(){
    if(isEmpty() == 0){
        for(int i = top; i >=0; i--)
            printf("%d.Element = %d\n", i+1, stack[i]);
    } else{
        printf("\nStack Underflow!");
    }
}
int main(){
    initialize();
    int choice;
    do{
        printf("\n1.Check if the stack is empty \n2.Display the contents of stack \n3.Push \n4.Pop \n5.Top element \n6.Low element \n7.Middle Element");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice){
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
                int n;
                printf("\nEnter the data to be pushed: ");
                scanf("%d", &n);
                push(n);
                break;
            }
            case 4:{
                printf("\nPopped element = %d", pop());
                break;
            }
            case 5:{
                printf("\nTop element = %d", peekHighestElement());
                break;
            }
            case 6:{
                printf("\nBottom element = %d", peekLowestElement());
                break;
            }
            case 7:{
                printf("\nMiddle element = %d", peekMiddleElement());
                break;
            }
            default :{
                printf("\nInvalid choice");
                break;
            }
        }

    }while(choice >= 1 && choice <= 4);
    return 0;
}
