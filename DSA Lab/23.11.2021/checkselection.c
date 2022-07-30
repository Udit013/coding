/* WAP to verify that the algorithm is Adaptive and Stable or not for selection sort */

#include<stdio.h>

void display(int arr[], int n)
{   int i;
     for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
}
int selection(int arr[],int arrID[], int n)
{    
   
    int i,j=0; int pos,temp,adaptive=0; 

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

           temp=arrID[pos];
           arrID[pos]=arrID[i];
           arrID[i]=temp;
       }
       adaptive++;
   }
   return adaptive;
}
int main()
{
    int arr[]={101,102,103,104,105,106};
    int arrID[]={1,2,3,4,5,6};
    int arr2[]={104,103,102,104,101,106};
    int n=6;
    
   int adaptive =  selection( arr,arrID,n);

    if(adaptive==0 )
     {
          printf("\n adaptive because it doesnt complete one iteration if the array is sorted "); 
     }
    else
    {
        printf("\n not adaptive "); 
    }
     selection( arr2,arrID, n);
    printf("\n not stable ");
    printf("\nthe array after sorting :");
    display(arr2,n);
    printf("\nthe array index after sorting: ");
    display(arrID,n);
    printf("\nsince the id of the duplicate number does not remain preserved hence it is not stable \n ");

} 