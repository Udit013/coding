/*
Write a menu driven program to perform the following operations of a stack using array 
by using suitable user defined functions for each case.
a) Check if the stack is empty b) Display the contents of stack c) Push d) Pop
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *stack;
int top;
int size;
char bracket[20];

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

int comparator(char ch){
    if(ch == '[')
        return 1;
    if(ch == '{')
        return 2;
    if(ch == '(')
        return 3;
    if(ch == ')')
        return -3;
    if(ch == '}')
        return -2;
    if(ch == ']')
        return -1;
    else
        return 0;
}

char peek(){
    return bracket[top];
}


void push(char userData){
    if(isFull() == 1){
        printf("\nStack Overflow!\n");
        return;
    }
    else{
        stack[++top] = userData;
    }
}

char pop(){
    if(isEmpty() == 1){
        printf("\nStack Underflow!\n");
        return '0';
    }
    return stack[top--];
}

void display(){
    if(isEmpty() == 0){
        printf("\nBrackets: ");
        for(int i = top; i >=0; i--)
            printf("\n%c", stack[i]);
    } else{
        printf("\nStack Underflow!");
    }
}

void initialize(){
    printf("\nEnter the brackets(max 20): ");
    scanf("%s", bracket);
    size = strlen(bracket);
    stack = (char *) malloc (size * sizeof(char));
    top = -1;
}

void generateResut(){
    char *arr = (char *) malloc (size * sizeof(char));
    int k = 0;
    if(comparator(bracket[0]) < 0){
        printf("\nInvalid sequence, starting with %c", bracket[0]);
        return;
    }
    for(int i = 0; i < size; i++){
        char ch = bracket[i];
        if(comparator(ch) > 0){
            push(ch);
        }
        else{
            arr[k++] = ch;
            arr[k++] = pop();
        }
    }
    int sum = 0;
    for(int i = 0; i < size; i+=2){
        if(comparator(arr[i]) + comparator(arr[i+1]) == 0)
            sum+=0;
        else
            sum+=1;
    }
    if(sum == 0)
        printf("\nYES");
    else
        printf("\nNO");
}

int main(){
    initialize();

    generateResut();

    return 0;
}
