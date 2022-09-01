#include <iostream>
using namespace std;

void SelectionSort(int arr[], int size)
{
    int stepCount = 0, j, i, min;
    for (i = 0; i < size; i++)
    {
        stepCount++;
        min = i;
        for (j = i+1; j < size; j++)
        {
            stepCount++;
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }

    cout << "StepCount= " << stepCount << endl;
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
    SelectionSort(arr, size);
    printArray(arr, size);
    return 0;
}