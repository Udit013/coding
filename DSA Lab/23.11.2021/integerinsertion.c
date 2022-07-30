/* WAP to sort an array of n integers in a descending order using insertion sort. */

#include<stdio.h>

void insert(int arr[],int n)
{
    int i,j=0; int curr;

    for(i=0;i<n;i++)
    {   j=i-1;
        curr=arr[i];
        while(j>-1 && arr[j]>curr)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
}
int main()
{  int n,i;
    printf("enter the size of array : ");
    scanf("%d",&n);
     int arr[n];
    printf("enter the array :");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
   insert(arr,n);
    printf("the sorted array :");
   for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
}