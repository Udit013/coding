// 2)Let A be a list of n (not necessarily distinct) integers.
// Write a program by using User Defined Function(UDF)s to test
// whether any item occurs more than ⌈ n/2⌉ times in A.
// a) UDF should take O(n2) time and use no additional space.
// b) UDF should take O(n) time and use O(1) additional space.

#include <iostream>
using namespace std;

int counterOne(int arr[], int size)
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

int counterTwo(int arr[], int size)
{
    int high = arr[0], count = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            count--;
        }
        if (count == 0)
        {
            high = arr[i];
        }
        if (arr[i] == arr[i - 1])
        {
            count++;
        }
    }
    if (count > 0)
        return high;

    return high;
}

int checkCount(int arr[], int size, int n)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            count++;
        }
    }
    if (count > (size / 2))
    {
        return n;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int size;
    cout << "Enter size of array:" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "a:" << counterOne(arr, size) << endl;

    cout << "b:" << checkCount(arr, size, counterTwo(arr, size)) << endl;

    return 0;
}