/*
Write a menu driven program to perform the following operations of a stack using array 
by using suitable user defined functions for each case.
a) Check if the stack is empty b) Display the contents of stack c) Push d) Pop
*/
#include <stdio.h>
#include <stdlib.h>

int *stack1;
int *stack2;
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
    //printf("\nEnter size of stack: ");
    //scanf("%d", &size);
    size = 5;
    stack1 = (int *) malloc (size * sizeof(int));
    stack2 = (int *) malloc (size * sizeof(int));
    top = -1;
    
}

void push(int* stack, int userData){
    if(isFull() == 1){
        printf("\nStack Overflow!\n");
        return;
    }
    else{
        stack[++top] = userData;
    }
}

int pop(int* stack){
    if(isEmpty() == 1){
        printf("\nStack Underflow!\n");
        return -8888;
    }
    return stack[top--];
}

void display(int* stack){
    if(isEmpty() == 0){
        for(int i = top; i >=0; i--)
            printf("%d.Element = %d\n", i+1, stack[i]);
    } else{
        printf("\nStack Underflow!");
    }
}
int main(){
    initialize();
    push(stack1,2);
    push(stack1,4);
    push(stack1,6);
    push(stack1,8);
    push(stack1,10);

    display(stack1);

    //printf("Popped element: %d", pop(stack1));
    //top = -1;
    stack2[0] = pop(stack1);
    stack2[1] = pop(stack1);
    stack2[2] = pop(stack1);
    stack2[3] = pop(stack1);
    stack2[4] = pop(stack1);



    display(stack2);
}
