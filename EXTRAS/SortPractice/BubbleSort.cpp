#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    int stepCount = 0;
    cout << "Bubble sort" << endl;
    for (int i = 0; i < size; i++)
    {
        stepCount++;
        for (int j = 0; j < size - 1; j++)
        {
            stepCount++;
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "step Count= " << stepCount << endl;
}

void optimizedBubble(int arr[], int size)
{
    int stepCount = 0;
    cout << "optimized Bubble sort" << endl;
    bool swapped=false;
    for (int i = 0; i < size; i++)
    {
        stepCount++;
        for (int j = 0; j < size - 1 - i; j++)
        {
            stepCount++;
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            cout << "step Count= " << stepCount << endl;
            break;
        }
        
    }
    if ( swapped == true)
        {
            cout << "step Count= " << stepCount << endl;
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
    int arr[] = {15, 5, 6, 20, 11, 19, 13};
    int size = (sizeof(arr) / sizeof(int));
    // bubbleSort(arr, size);
    // printArray(arr, size);
    optimizedBubble(arr, size);
    printArray(arr, size);
    return 0;
}