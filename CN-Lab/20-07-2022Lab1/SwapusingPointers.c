// 1. Write a C program to swap the content of 2 variables using pointer.
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y;
    printf("Enter value of x and y : ");
    scanf("%d%d", &x, &y);
    swap(&x, &y);
    printf("\nValues of x and y after swapping: ");
    printf("%d %d\n", x, y);
    return 0;
}
