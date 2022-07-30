/*2.Write a program to display data of two different types using
 function template with multiple arguments */

#include <iostream>
using namespace std;

template <class Temp1, class Temp2>
void display(Temp1 x, Temp2 y)
{
    cout << "Integer: " << x << endl;
    cout << "Character: " << y << endl;
}
int main()
{
    int x;
    cout << "Enter any integer" << endl;
    cin >> x;
    char y;
    cout << "Enter any character" << endl;
    cin >> y;
    display(x, y);

    return 0;
}
