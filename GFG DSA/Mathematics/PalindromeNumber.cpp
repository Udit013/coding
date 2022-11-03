#include <iostream>
using namespace std;

bool isPalindromeNumber(int n)
{
    int rev = 0, last;
    int temp = n;
    while (temp != 0)
    {
        last = temp % 10;
        rev = rev * 10 + last;
        temp = temp / 10;
    }
    if (n == rev)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n = 2256522;
    cout << isPalindromeNumber(n);
    return 0;
}