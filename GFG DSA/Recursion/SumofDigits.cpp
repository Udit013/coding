#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    if (n<=9)
        return n;
    return sumOfDigits(n / 10) + n % 10;
}

int main()
{
    int n = 121;
    cout << sumOfDigits(121);
}