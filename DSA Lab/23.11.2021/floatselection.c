/* WAP to sort an array of n floats in an ascending order 
using selection sort. */

#include<stdio.h>

void selection(float arr[],int n)
{
    int i,j=0; int pos,temp; 

   for(i=0;i<n;i++)
   {
       pos=i;
       for(j=i+1;j<n;j++)
       {
           if(arr[pos]>arr[j])
            pos=j;
       }
       if(pos!=i)
       {
           temp=arr[pos];
           arr[pos]=arr[i];
           arr[i]=temp;
       }
   }
}

int main()
{  int n,i;
    printf("\nenter the size of array : ");
    scanf("%d",&n);
     float arr[n];
    printf("\nenter the array :");
    for(i=0;i<n;i++)
    {
        scanf("%.1f", &arr[i]);
    }
   selection(arr,n);
    printf("\nthe sorted array :");
   for(i=0;i<n;i++)
    {
        printf("%.1f ", arr[i]);
    }
}