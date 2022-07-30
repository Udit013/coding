/*5.Write a program to throw and handle’ array out of bound’ exception. */

#include <iostream>
#include <string>
using namespace std;

int access_element(int arr[], int size, int index)
{
    if (index >= size)
    {
        throw string("Array Out Of Bound at index " + index);
    }
    return arr[index];
}

int main()
{ 
    int n;
    int arr[3] = {1, 2, 3};

    try
    {
        cout << access_element(arr, 3, 5) << endl;
    }
    catch (string e)
    {
        cout << "Exception :" << e << endl;
    }
}