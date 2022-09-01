
#include <iostream>
using namespace std;

void InsertionSort(int arr[], int size)
{
    int key, count = 0, j;
    for (int i = 1; i < size; i++)
    {           
        count++;
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            count++;
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    cout << "StepCount= " << count << endl;
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
    int arr[] = {15, 5, 6, 20, 11, 19, 13};
    int size = (sizeof(arr) / sizeof(int));
    InsertionSort(arr, size);
    printArray(arr, size);
    return 0;
}