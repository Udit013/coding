// 1.Write a program to store numbers into an array of n integers and then find out
// the smallest and largest number stored in it. n is the user input

#include <iostream>
using namespace std;
int largest(int a[], int n)
{
    int l = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > l)
            l = a[i];
    }
    return l;
}
int smallest(int a[], int n)
{
    int s = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < s)
            s = a[i];
    }
    return s;
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
    cout << "Largest element is: " << largest(arr, n) << endl;
    cout << "Smallest element is: " << smallest(arr, n) << endl;
    return 0;
}