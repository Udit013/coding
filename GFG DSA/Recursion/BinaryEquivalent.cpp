//recursion func prints binary equivalent of a number greater than zero

#include <iostream>
using namespace std;

void fun(int n)
{
    if (n == 0)
        return;
    fun(n / 2);
    cout << (n % 2);
}
int main()
{
    int n = 8;
    fun(8);
}
