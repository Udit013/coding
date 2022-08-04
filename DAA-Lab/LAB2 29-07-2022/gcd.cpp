// Write a program to find out GCD (greatest common divisor) using the following three
// algorithms.
// a) Euclid’s algorithm
// b) Consecutive integer checking algorithm.
// c) Middle school procedure which makes use of common prime factors. For finding
// list of primes implement sieve of Eratosthenes algorithm.

#include <iostream>
#include <vector>

using namespace std;

int countEuclid = 1;
int countConsecutive = 1;
int countMiddleSchool = 1;

int min(int x, int y)
{
    if (x > y)
        return y;
    else
        return x;
}

int euclid(int x, int y)
{
    countEuclid++;
    if (y == 0)
        return x;
    else
        return euclid(y, x % y);
}

int consecutiveInt(int x, int y)
{
    int t = min(x, y);
    for (int i = t; i >= 2; i--)
    {
        countConsecutive++;
        if (x % i == 0 && y % i == 0)
            return i;
    }
    return 1;
}

vector<bool> seive(int n)
{
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        countMiddleSchool++;
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                countMiddleSchool++;
                isPrime[j] = false;
            }
        }
    }

    return isPrime;
}

int middleSchool(int x, int y)
{
    vector<bool> v1 = seive(x);
    vector<bool> v2 = seive(y);
    int small = min(x, y);

    int gcd = 1;
    for (int i = 2; i <= small; i++)
    {
        countMiddleSchool++;
        if (v1[i] && x % i == 0 && y % i == 0)
            gcd *= i;
    }

    return gcd;
}

int main()
{
    int x = 12;
    int y = 12;
    cout << "gcd=" << euclid(x, y) << " count= " << countEuclid << endl;
    cout << "gcd=" << consecutiveInt(x, y) << " count= " << countConsecutive << endl;
    cout << "gcd=" << middleSchool(x, y) << " count= " << countMiddleSchool << endl;

    return 0;
}