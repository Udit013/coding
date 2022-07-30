/* WAP to sort an array of n floats in an ascending 
order using selection sort.*/

#include<stdio.h>
#include<stdlib.h>

void selection_sort(float arr[],int n){
    int i,j,min_index,temp;
    for(i=0;i<n-1;i++){
        min_index=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
}

void main()
{
    int n,i;
    float arr[100];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    selection_sort(arr,n);
    printf("Sorted elements: ");
    for(i=0;i<n;i++){
        printf("%f ",arr[i]);
    }
}

