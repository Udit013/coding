/*WAP to find the height of a binary tree and to display the total no of nodes in a binary
 tree using recursion*/

#include <stdio.h>
#include <malloc.h>

struct NodeTree{
    struct NodeTree* left;
    int data;
    struct NodeTree* right;
};

struct NodeTree* createNode(int value){
    struct NodeTree* newNode = (struct NodeTree*) malloc (sizeof(struct NodeTree));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

int returnNodeNumber(struct  NodeTree *p){
    if(p == NULL)
        return 0;
    else{
        return returnNodeNumber(p->left) + returnNodeNumber(p->right) + 1;
    }
}
 
int returnHeight(struct NodeTree* p){
    if(p == NULL)
        return 0;
    else{
        int lh = returnHeight(p->left);
        int rh = returnHeight(p->right);

        if(lh > rh)
            return lh + 1;
        else
            return rh + 1;
    }
}

int main(){

    //       4
    //      / \
    //     1   2
    //    / \
    //   3   7

    struct NodeTree *p, *p1, *p2;
    p = createNode(4);
    p1 = createNode(1);
    p2 = createNode(2);

    p->left = p1;
    p->right = p2;
    p1->left = createNode(3);
    p1->right = createNode(7);

    printf("\nNo of nodes = %d", returnNodeNumber(p));
    printf("\nHeight of tree = %d", returnHeight(p));

    return 0;
}