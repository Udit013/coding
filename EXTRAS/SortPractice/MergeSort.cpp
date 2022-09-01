#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int size1 = mid - low + 1, size2 = high - mid;
    int left[size1], right[size2];
    for (int i = 0; i < size1; i++)
    {
        left[i] = arr[low + i];
    }
    for (int i = 0; i < size2; i++)
    {
        right[i] = arr[mid + i + 1];
    }
    int i = 0, j = 0, k = low;
    while (i < size1 && j < size2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = right[j];
            k++;
            j++;
        }
    }
    while (i < size1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < size2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (high + low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 4, 6, 2, 9, 0, 1};
    int size = (sizeof(arr) / sizeof(int));
    mergeSort(arr, 0, (size - 1));
    printArray(arr, size);
    return 0;
}