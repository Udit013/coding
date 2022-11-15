// recursion func prints n to 1. Assumption: input is always >=1

#include <iostream>
using namespace std;

void fun(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    fun(n - 1);
}

int main()
{
    int n = 8;
    fun(8);
}
