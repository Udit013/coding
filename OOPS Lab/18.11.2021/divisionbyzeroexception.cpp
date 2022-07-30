/*4.Write a program to throw and handle ‘division by zero’ exception. */

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two integer values: ";
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        else
        {
            cout << (a / b);
        }
    }
    catch (int)
    {
        cout << "Second value cannot be zero";
    }
    return 0;
}
