#include <iostream>
using namespace std;

// int trailingZeros(int n)
// {
//     int tz = 0;
//     int fact = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     while (fact % 10 == 0)
//     {
//         tz = tz + 1;
//         fact = fact / 10;
//     }
//     return tz;
// }

int trailingZeros(int n)
{
    int tz = 0;
    for (int i = 5; i <= n; i=i*5)
    {
        tz=tz+ (n/i);
    }
    return tz;
}


int main()
{
    int n = 20;
    cout << trailingZeros(n);
    return 0;
}