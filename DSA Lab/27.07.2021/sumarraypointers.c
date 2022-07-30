#include<stdio.h>

int main(){
    int n;
    printf("enter the number of elements of array ");
    scanf("%d",&n);
    int array[n];
    int sum=0;
    int *p;
    printf("\nenter %d values of array ",n);
    for(int i =0;i<n;i++){
        scanf("%d",&array[i]);
    }
    p = &array[0];
    for (int i=0;i<n;i++){
        sum=sum + *p;
        p++;
    }
    printf("\nthe sum is %d", sum);
    return 0;
}