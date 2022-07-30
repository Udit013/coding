/*
2.You are given an array of 0s and 1s in random order. 
 Segregate 0s on left side and 1s on right side of the array. 
 Traverse array only once.
*/
#include <stdio.h>
#include <stdlib.h>

int *arr_556, len_556;
void display(){
    for(int i = 0; i < len_556; i++){
        printf("%d  ", arr_556[i]);
    }
}
void input(){
    printf("\nEnter the length of array: ");
    scanf("%d", &len_556);

    arr_556 = (int *)malloc(len_556 * sizeof(int));

    printf("\nEnter elements of array: \n");
    for(int i = 0; i < len_556; i++){
        scanf("%d", &arr_556[i]);
    }
}
void swap(int index1, int index2){
    int temp_556 = arr_556[index1];
    arr_556[index1] = arr_556[index2];
    arr_556[index2] = temp_556;
}
void segregate(){
    int startIndex_556 = 0;
    int endIndex_556 = len_556 - 1;

    while(startIndex_556 < endIndex_556){
        if(arr_556[startIndex_556] == 1){
            swap(startIndex_556, endIndex_556);
            endIndex_556--;
        }
        else
            startIndex_556++;
    }
}
int main(){
    input();
    printf("\nBefore sorting: \n");
    display();
    segregate();
    printf("\nAfter sorting: \n");
    display();
    return 0;
}