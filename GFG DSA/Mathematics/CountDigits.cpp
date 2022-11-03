#include <iostream>
using namespace std;

int countDigits(int n)
{
    int count;
    while (n > 0)
    {
        n = n / 10;
        count = count + 1;
    }
    return count;
}

int main()
{
    int n = 9442;
    cout<< countDigits(n);
    return 0;
}