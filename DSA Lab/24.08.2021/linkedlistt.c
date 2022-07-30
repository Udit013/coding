//Insertion
//Deletion
//Modification

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data_556;
    struct Node *next;
}*root = NULL;

//struct Node *root = NULL;

void createList(int *arr, int len){
    struct Node *newNode, *temp;
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data_556 = arr[0];
    root->next = NULL;
    temp = root;
    for(int i = 1; i < len; i++){
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data_556 = arr[i];
        newNode->next = NULL;
        temp->next = newNode;
        temp = newNode;
    }
}

void display(){
    printf("\n");
    int index = 1;
    struct Node *temp;
    temp = root;
    while(temp){
        printf("\n%d.Data = %d", index++, temp->data_556);
        temp = temp->next;
    }
}

void addFront(int userData){
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data_556 = userData;
    newNode->next = root;
    root = newNode;
}

void addEnd(int userData){
    struct Node *newNode, *temp;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data_556 = userData;
    newNode->next = NULL;
    temp = root;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

int main(){
    int len;
    printf("\nEnter the number of elements: ");
    scanf("%d", &len);
    int *arr;
    arr = (int *)malloc(len * sizeof(int));
    printf("\nEnter the elements:\n");
    for(int i = 0; i < len; i++)
        scanf("%d", &arr[i]);
    printf("\n");
    // for(int i = 0; i < len; i++)
    //     printf("%d", arr[i]);
    createList(arr, len);
    display();
    addFront(70);
    addEnd(70);
    display();
    return 0;
}