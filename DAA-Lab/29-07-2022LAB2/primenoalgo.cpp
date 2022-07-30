#include <iostream>
using namespace std;

int primeMethodone(int n)
{
    int counter = 0;

    for (int i = 2; i < n; i++)
    {
        counter++;
        if (n % i == 0)
        {
            return counter;
        }
    }

    return counter;
}

int primeMethodtwo(int n)
{
    int counter = 0;

    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i < n; i++)
    {
        counter++;
        if (n % i == 0)
        {
            return counter;
        }
    }
    return counter;
}

int primeMethodthree(int n)
{
    int counter = 0;
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0 || n % 11 == 0)
    {
        return 0;
    }

    if ((n + 1) / 6.0 == (n + 1) / 6 || (n - 1) / 6.0 == (n - 1) / 6)
        return 1;
    else
        return 1;
}

int main()
{

    int arr[10];
    cout << "Enter 10 numbers: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "Input\t\t"
         << "Algo 1\t\t"
         << "Algo 2\t\t"
         << "Algo 3" << endl
         << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "\t\t" << primeMethodone(arr[i])
             << "\t\t" << primeMethodtwo(arr[i]) << "\t\t" << primeMethodthree(arr[i]) << endl;
    }
}