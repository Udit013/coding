#include <iostream>
using namespace std;

void printDivisorsSorted(int n)
{
    int i;
    for (i = 1; i * i < n; i = i + 1)
    {
        if (n % i == 0)
            cout << i << " ";
    }
    for (; i >= 1; i--)
    {
        if (n % i == 0)
            cout << n / i << " ";
    }
}

int main()
{
    int n = 105;
    printDivisorsSorted(n);
    return 0;
}