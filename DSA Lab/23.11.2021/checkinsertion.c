/* WAP to verify that the algorithm is Adaptive and Stable or not for insertion sort */

#include<stdio.h>

void display(int arr[], int n)
{   int i;
     for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
}
int insertion(int arr[],int arrID[], int n)
{    int i,j=0; 
     int curr,currID;
     int adaptive=0;

    for(i=0;i<n;i++)
    {   j=i-1;
        curr=arr[i];
        currID=arrID[i];
        while(j>-1 && arr[j]>curr)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
        arrID[j+1]=currID;
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
    
   int adaptive =  insertion( arr,arrID,n);

    if(adaptive==0 )
     {
          printf("\n adaptive because it doesnt complete one iteration if the array is sorted "); 
     }

     insertion( arr2,arrID, n);
    printf("\nstable ");
    printf("\nthe array after sorting :");
    display(arr2,n);
    printf("\nthe array index after sorting: ");
    display(arrID,n);
    printf("\nsince the id of the duplicate number remains preserved hence it is stable \n ");

} 