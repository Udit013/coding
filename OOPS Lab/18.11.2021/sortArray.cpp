/*1.Write a program  to find sort an integer array and a float array,
 using function template. */

#include <iostream>
using namespace std;

template <class Array>

void sort(Array arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] > arr[j])
            {
                Array temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int ni, nf;
    cout << "Enter the length of interger array" << endl;
    cin >> ni;
    cout << "Enter the length of float array" << endl;
    cin >> nf;
    int int_array[ni];
    float float_array[nf];
    cout << "Enter integer array elements:" << endl;
    for (int i = 0; i < ni; i++)
    {
        cin >> int_array[i];
    }
    cout << "Enter 5 floating array elements:" << endl;
    for (int i = 0; i < nf; i++)
    {
        cin >> float_array[i];
    }
    sort(int_array, ni);
    sort(float_array, nf);
    cout << "Sorted integer array:" << endl;
    for (int i = 0; i < ni; i++)
    {
        cout << int_array[i] << ", ";
    }
    cout << endl;
    cout << "Sorted floating number array:" << endl;
    for (int i = 0; i < nf; i++)
    {
        cout << float_array[i] << ", ";
    }
    return 0;
}
