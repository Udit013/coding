#include <iostream>
using namespace std;

int elementCount(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] == arr[i])
                count++;
        }
        if (count > size / 2)
            return arr[i];
    }
    return -1;
}

int elementCountTwo(int arr[], int size)
{
    int highest = arr[0], count = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            count--;
        }
        if (count == 0)
        {
            highest = arr[i];
        }
        if (arr[i] == arr[i - 1])
        {
            count++;
        }
    }
    if (count > 0)
        return highest;

    return highest;
}

int checkCount(int arr[], int size, int num)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    if (count > (size / 2))
    {
        return num;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int n;
    cout << "Enter value of n:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "a:" << elementCount(arr, n) << endl;

    cout << "b:" << checkCount(arr, n, elementCountTwo(arr, n)) << endl;

    return 0;
}