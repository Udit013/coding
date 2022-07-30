// 1.Write a program to test whether a number n, entered through keyboard is prime or
// not by using different algorithms you know for atleast 10 inputs and note down the time
// complexity by step/frequency count method for each algorithm & for each input.
// Finally make a comparision of time complexities found for different inputs, plot an
// appropriate graph & decide which algothm is faster

#include <iostream>
using namespace std;

bool isPrimeone(int n)
{
    int c1 = 0;
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        c1 = c1 + 1;
    }
    cout << "counter1= " << c1;
    return true;
}
bool isPrimetwo(int n)
{
    int c2 = 0;
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    for (int i = 5; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        c2 = c2 + 1;
    }
    cout << "\ncounter2= " << c2;
}
bool isPrimethree(int n)
{
    int c3 = 0;
    if (n <= 1)
        return false;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        c3 = c3 + 1;
    }
    cout << "counter3= " << c3;
    return true;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    isPrimeone(n) ? cout << " \ntrue" : cout << "\nfalse";
    isPrimetwo(n) ? cout << " \ntrue" : cout << "\nfalse";
    return 0;
}
