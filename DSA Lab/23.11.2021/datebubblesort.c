/* WAP to sort an array of n dates in an ascending order using Bubble sort.
 Date structure is {day, month, year }*/

#include <stdio.h>

struct date
{
    int d, m, y;
};

int bubble_sort(struct date arr[], int n)
{
    int i, j, f = 0;
    struct date temp;

    for (i = 0; i < n; i++)
    {
        f = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j].y > arr[j + 1].y || arr[j].m > arr[j + 1].m || arr[j].d > arr[j + 1].d)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                f = 1;
            }
        }
        if (f == 0)
            break;
    }
}

int main()
{
    int n, i;
    printf("\nenter the number of dates:");
    scanf("%d", &n);

    struct date arr[n];
    int datearr[n];
    printf("\nenter the dates:");

    for (i = 0; i < n; i++)
    {
        printf("\nenter the day month and year :");
        scanf("%d.%d.%d", &arr[i].d, &arr[i].m, &arr[i].y);
    }
    bubble_sort(arr, n);

    for (i = 0; i < n; i++)
    {
        printf("%d.%d.%d   ", arr[i].d, arr[i].m, arr[i].y);
    }
}