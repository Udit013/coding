/* 1. Write a program to implement Bubble Sort and optimized Bubble sort
and compare their complexities for best and worst cases. Also, plot a graph for the same.*/

#include <iostream>
using namespace std;

void inputBestCase(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = (i + 1);
    }
}
void inputWorstCase(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = (size - i);
    }
}

int bubbleSort(int arr[], int size)
{
    int stepCount = 0;
    for (int i = 0; i < size; i++)
    {
        stepCount++;
        for (int j = 0; j < size - 1; j++)
        {
            stepCount++;
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
    return stepCount;
}

int optimizedBubbleSort(int arr[], int size)
{
    int stepCount = 0;
    for (int i = 0; i < size; i++)
    {
        stepCount++;
        int flag = 0;
        for (int j = 0; j < size - i - 1; j++)
        {
            stepCount++;
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            return stepCount;
    }
    return stepCount;
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];

    inputBestCase(arr, size);
    cout << bubbleSort(arr, size) << endl;
    display(arr, size);

    inputWorstCase(arr, size);
    cout << bubbleSort(arr, size) << endl;
    display(arr, size);

    inputBestCase(arr, size);
    cout << optimizedBubbleSort(arr, size) << endl;
    display(arr, size);

    inputWorstCase(arr, size);
    cout << optimizedBubbleSort(arr, size) << endl;
    display(arr, size);

    return 0;
}