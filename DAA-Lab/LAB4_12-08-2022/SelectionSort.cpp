/* 2. Write a program to implement Selection Sort and optimized Selection sort
and compare their complexities for best and worst cases. Also, plot a graph for the same.*/

#include <bits/stdc++.h>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int selectionSort(int arr[], int n)
{
    int c = 0;
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        c++;
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            c++;
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
            swap(arr[min], arr[i]);
    }
    return c;
}

int optimizedSelectionSort(int arr[], int n)
{
    int c = 0;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        c++;
        int min = i;
        int max = i;
        int min_index = i;
        int max_index = i;
        for (int k = i; k <= j; k++)
        {
            c++;
            if (arr[k] > max)
            {
                max = arr[k];
                max_index = k;
            }
            else if (arr[k] < max)
            {
                min = arr[k];
                min_index = k;
            }
        }
        swap(arr[i], arr[min_index]);
        if (arr[min_index] == max)
            swap(arr[j], arr[min_index]);
        else
            swap(arr[max_index], arr[j]);
    }
    return c;
}

void display()
{
    srand(time(0));
    int sl = 0;
    cout << "Sl. No \t  Value of n \t TC(Best case)    TC(Worst Case)  \n\n";
    for (int n = 100; n <= 1000; n = n + 100)
    {
        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            arr1[i] = i + 1;
        }
        int bestCase = selectionSort(arr1, n);
        int arr2[n];
        for (int i = n; i >= 1; i--)
        {
            arr2[i] = i;
        }
        int worstCase = selectionSort(arr2, n);

        cout << ++sl << " \t " << n << "\t\t" << bestCase << "\t\t" << worstCase << "\n";
    }
}

void displayOptimized()
{
    srand(time(0));
    int sl = 0;
    cout << "Sl. No \t  Value of n \t TC(Best case)    TC(Worst Case)  \n\n";
    for (int n = 100; n <= 1000; n = n + 100)
    {
        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            arr1[i] = i + 1;
        }
        int bestCase = optimizedSelectionSort(arr1, n);
        int arr2[n];
        for (int i = n; i >= 1; i--)
        {
            arr2[i] = i;
        }
        int worstCase = optimizedSelectionSort(arr2, n);

        cout << ++sl << " \t " << n << "\t\t" << bestCase << "\t\t" << worstCase << "\n";
    }
}
int main()
{
    cout << "\n Selection sort: \n";
    display();
    cout << "\n Optimised selection sort \n";
    displayOptimized();
}