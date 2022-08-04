// 4.Write a program that takes three variable (a, b, c) as separate parameters and rotates the
// values stored so that value a goes to b, b to c and c to a by using SWAP(x,y)
// function that swaps/exchanges the numbers x & y

#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void display(int a, int b, int c)
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

int main()
{
    int a = 200;
    int b = 5;
    int c = 556;

    cout << "Before rotating:" << endl;
    display(a, b, c);

    swap(b, c);
    swap(a, b);

    cout << "After rotating:" << endl;
    display(a, b, c);

    return 0;
}