/*
WAP to convert an infix expression into its equivalent postfix notation
*/
#include <stdio.h>
#include <stdlib.h>
 
char *stack_556;
int top_556;
char *infix_556;
char *postfix_556;
 
void initialise(){
    infix_556 = (char *)malloc(100 * sizeof(char));
    stack_556 = (char *)malloc(100 * sizeof(char));
    postfix_556 = (char *)malloc(100 * sizeof(char));
    char arr_556[100];
    printf("\nEnter the infix expression: ");
    scanf("%s", arr_556);
    int k = 0;
    int i = 0;
    infix_556[k++] = '(';
    while (arr_556[i] != '\0')
        infix_556[k++] = arr_556[i++];
    infix_556[k] = ')';
    infix_556[k + 1] = '\0';
 
    top_556 = -1;
}
 
int isEmpty(){
    if (top_556 == -1)
        return 1;
    else
        return 0;
}
 
void push(char token){
    stack_556[++top_556] = token;
}
 
char pop(){
    if (top_556 == -1)
        return '\0';
    else{
        int temp_556 = stack_556[top_556];
        top_556--;
        return temp_556;
    }
}
 
int isOperator(char ch_556){
    if(ch_556 == '(' || ch_556 == ')' || ch_556 == '^' || ch_556 == '*' ||
        ch_556 == '/' || ch_556 == '+' || ch_556 == '-')
        return 1;
    else
        return 0;
}
 
int isBracket(char ch_556){
    if (ch_556 == '(')
        return 1;
    else if (ch_556 == ')')
        return 2;
    else
        return 0;
}
 
int precedence(char ch_556){
    if (ch_556 == '(' || ch_556 == ')')
        return 0;
    if (ch_556 == '+' || ch_556 == '-')
        return 1;
    if (ch_556 == '*' || ch_556 == '/')
        return 2;
    if (ch_556 == '^')
        return 3;
}
 
void conversion(){
    int i_556 = 0;
    int p_556 = 0;
    while (infix_556[i_556] != '\0'){
        if (isOperator(infix_556[i_556]) == 0){ //if operand is found
            postfix_556[p_556++] = infix_556[i_556];
        }
        else{ // operator is found
            if (infix_556[i_556] == '('){
                push(infix_556[i_556]);
            }
            else if (infix_556[i_556] == ')'){
 
                while (stack_556[top_556] != '('){
                    char temp = pop();
                    postfix_556[p_556++] = temp;
                }
                top_556--;
            }
            else if (precedence(infix_556[i_556]) > precedence(stack_556[top_556])){
                push(infix_556[i_556]);
            }
            else if (precedence(infix_556[i_556]) <= precedence(stack_556[top_556])){
                while (precedence(infix_556[i_556]) <= precedence(stack_556[top_556])){
                    char temp = pop();
                    postfix_556[p_556++] = temp;
                }
                push(infix_556[i_556]);
            }
        }
        i_556++;
    }
}
 
void display(char arr[]){
    printf("\n%s\n", arr);
}
 
int main(){
    initialise();
    printf("Infix expression: ");
    display(infix_556);
    conversion();
    printf("Postfix expression: ");
    display(postfix_556);
    return 0;
}

