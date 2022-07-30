/* 2.Write a program to create a class that stores an array of 
integers as its member. Input the values by overloading the array
subscript operator [] . Find the sum and average of the values by
invoking member function. */

#include <bits/stdc++.h>
using namespace std;
class Array
{
    int data[5];

public:
    void get(int index, int value)
    {
        data[index] = value;
    }
    int operator[](int k)
    {
        return data[k];
    }
    void sum()
    {
        int i, sum = 0, avg;
        for (i = 0; i < 5; i++)
        {
            sum = sum + data[i];
        }
        cout << endl
             << "The sum of the data of the Array is : " << sum << endl;
        avg = sum / 5;
        cout << "The average of the data of the Array is : " << avg << endl;
    }
};
int main()
{
    Array a;
    int i;
    for (i = 0; i < 5; i++)
    {
        a.get(i, i);
    }
    cout << "The elements of the Array are: " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    a.sum();
    return 0;
}