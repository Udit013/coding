// 5.Let A be n*n square matrix array. WAP by using appropriate user defined functions for
// the following:
// a) Find the number of nonzero elements in A
// b) Find the sum of the elements above the leading diagonal.
// c) Display the elements below the minor diagonal.
// d) Find the product of the diagonal elements.

#include <stdio.h>
const int m = 3, n = 3;
void nonZero(int arr[m][n])
{
    int c = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j])
            {
                c++;
            }
        }
    }
    printf("Number of non zero elements: %d \n", c);
}

void sumLead(int arr[m][n])
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i)
            {
                sum = arr[i][j] + sum;
            }
        }
    }
    printf("Sum: %d \n", sum);
}

void lowerDiagonal(int arr[m][n])
{
    printf("Lower diagonal elements: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j >= n)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
}

void prodDiag(int arr[m][n])
{
    int prod = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                prod *= arr[i][j];
            }
        }
    }
    printf("Product of digaonal elements:%d \n ");
}

int main()
{

    int arr[m][n];
    printf("Enter array elements (3x3): \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    nonZero(arr);
    sumLead(arr);
    lowerDiagonal(arr);
    prodDiag(arr);
    return 0;
}