// 3.Write a program to rearrange the elements of an array of n integers such that all even
// numbers are followed by all odd numbers. How many different ways you can solve this
// problem. Write your approaches & strategy for solving this problem.

#include <iostream>
using namespace std;

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
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] % 2 == 0)
        {
            continue;
        }
        else
        {
            for (int j = i + 1; j < sizeof(arr) / sizeof(int); j++)
            {
                if (arr[j] % 2 == 0)
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}