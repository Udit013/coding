/* Write the following menu driven program for the binary tree
----------------------------------------
1. Create_BinaryTree_Array (using sequential representation)
2.Create_BinaryTree_Linked (using linked representation)
3. In-Order Traversal
4. Pre-Order Traversal
5. Post-Order traversal
*/

#include <stdio.h>
#include <malloc.h>

struct NodeTree{
    struct NodeTree* left;
    int data;
    struct NodeTree* right;
};

int* arrTree;
int size;

void arrayInput(){
    printf("\nEnter the number of nodes in tree for array: ");
    scanf("%d", &size);
    arrTree = (int *) malloc (size * sizeof(int));
    printf("\nEnter the values of nodes (level order) :\n");
    for(int i = 0; i < size ; i++)
        scanf("%d", &arrTree[i]);
}

void displayArray(){
    for(int i = 0; i < size ; i++)
        printf("%d ", arrTree[i]);

}

struct NodeTree* createNode(int value){
    struct NodeTree* newNode = (struct NodeTree*) malloc (sizeof(struct NodeTree));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Nodetree* nodeInput(){
    int rootVal;
    printf("\nEnter the root value: ");
    scanf("%d", &rootVal);
    struct NodeTree* root = createNode(rootVal);
}

void preOrder(struct NodeTree *root){
    if(root != NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct NodeTree *root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

void inOrder(struct NodeTree *root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int main(){
    arrayInput();
    displayArray();
    return 0;
}