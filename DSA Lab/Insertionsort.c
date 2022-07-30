#include <stdio.h>
void print_array (int arr[], int n) 
{
	int i;
    for ( i = 0; i < n; i++){
        printf ("%d ", arr[i]);
    } 
    printf ("\n");
} 
void insertion_sort (int arr[], int n) 
{
    int i;
    for ( i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j]>key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; 
    }

}
int main () {
    int arr[20];
    int n , i;
    printf("\nEnter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertion_sort (arr, n);
    printf ("Sorted array in ascending order:\n");
    print_array (arr, n);
}