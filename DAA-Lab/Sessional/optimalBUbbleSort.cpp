#include <iostream>
using namespace std;

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
    int size;
    cout<<"Enter the no of jackets: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the jacket numbers:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    optimizedBubble(arr, size);
    printArray(arr, size);
    return 0;
}