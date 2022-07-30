/*
3.Given an unsorted dynamic array arr and two numbers x and y, 
find the minimum distance between x and y in arr. The array might also contain duplicates. 
You may assume that both x and y are different and present in arr.
Input: arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3}, x = 3, y = 6
Output: Minimum distance between 3 and 6 is 4.
*/

#include <stdio.h>
#include <stdlib.h> 
 
int minDist(int arr_556[], int n_556, int x_556, int y_556)
{
    int i_556, j_556;
    int min_dist = 0;
    for (i_556 = 0; i_556 < n_556; i_556++) {
        for (j_556 = i_556 + 1; j_556 < n_556; j_556++) {
            if ((x_556 == arr_556[i_556] && y_556 == arr_556[j_556]|| y_556 == arr_556[i_556] && x_556 == arr_556[j_556])) {
                min_dist = abs(i_556 - j_556);
            }
        }
    }
    return min_dist;
}
int main()
{
    int *arr_556,n_556,x_556,y_556,i_556,j_556;
    printf("Enter the length of array: ");
    scanf("%d", &n_556);
    arr_556 = (int*) calloc(n_556, sizeof(int));
    printf("\nEnter %d Numbers:\n",n_556);
    for(i_556=0;i_556<n_556;i_556++)
    {
        scanf("%d",arr_556+i_556);
    }
    printf("Enter the numbers between which the distance is to be calculated: ");
    scanf("%d%d", &x_556,&y_556);  
    printf("Minimum distance between %d and %d is %d\n", x_556,y_556, minDist(arr_556, n_556, x_556, y_556));
    return 0;
}
