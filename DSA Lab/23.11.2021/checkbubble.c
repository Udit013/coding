/* WAP to verify that the algorithm is Adaptive and Stable or not for Bubble sort */

#include<stdio.h>

void display(int arr[], int n)
{   int i;
     for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
}
int bubble(int arr[],int arrID[], int n)
{  int i,j,f=0;
    int temp;
    int adaptive=0;

  for(i=0;i<n;i++)
    {   f=0;
        for(j=0;j<n-i-1;j++)
        {
          if(arr[j] > arr[j+1])
          {
              temp =arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;

              temp =arrID[j];
              arrID[j]=arrID[j+1];
              arrID[j+1]=temp;
              f=1;
              
          }
        }
        if(f==0)
        break;
        adaptive++;   
    }
    return adaptive;
}
int main()
{
    int arr[]={101,102,103,104,105,106};
    int arrID[]={1,2,3,4,5,6};
    int arr2[]={107,100,102,102,105,106};
    int n=6;
    
   int adaptive =  bubble( arr,arrID,n);

    if(adaptive==0 )
     {
          printf("\n adaptive because it doesnt complete one iteration if the array is sorted "); 
     }

    bubble( arr2,arrID, n);
    printf("\nstable ");
    printf("\nthe array after sorting :");
    display(arr2,n);
    printf("\nthe array index after sorting: ");
    display(arrID,n);
    printf("\nsince the id of the duplicate number remains preserved hence it is stable \n ");

} 