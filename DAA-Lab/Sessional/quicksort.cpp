#include <iostream>
using namespace std;

int lPartion(int arr[], int low, int high)
{
    int i = low - 1;
    int pivot = arr[high];
    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[high], arr[i + 1]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (high > low)
    {
        int pivot = lPartion(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
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
    int size;
    cout << "Enter the no of jackets: ";
    cin >> size;
    int arr[size];
    cout << "Enter the jacket numbers:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, size - 1);
    printArray(arr, size);
    return 0;
}
