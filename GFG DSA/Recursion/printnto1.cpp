// recursion func prints n to 1. Assumption: input is always >=1

#include <iostream>
using namespace std;

void print1ton(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    print1ton(n - 1);
}

int main()
{
    int n = 8;
    print1ton(8);
}
