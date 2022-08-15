// 1.Write a program to test whether a number n, entered through keyboard is prime or
// not by using different algorithms you know for atleast 10 inputs and note down the time
// complexity by step/frequency count method for each algorithm & for each input.
// Finally make a comparision of time complexities found for different inputs, plot an
// appropriate graph & decide which algothm is faster

#include <iostream>
#include <cmath>
using namespace std;

int checkPrimeOne(int num)
{
    int count = 0;
    for (int i = 2; i < num; i++)
    {
        count++;
        if (num % i == 0)
        {
            return count;
        }
    }
    return count;
}

int checkPrimeTwo(int num)
{
    int count = 0;
    for (int i = 2; i <= num / 2; i++)
    {
        count++;
        if (num % i == 0)
        {
            return count;
        }
    }
    return count;
}

int checkPrimeThree(int num)
{
    int count = 0;
    for (int i = 2; i <= sqrt(num); i++)
    {
        count++;
        if (num % i == 0)
        {
            return count;
        }
    }
    return count;
}

int main()
{
    int arr[10];

    cout << "Enter 10 numbers: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Input\t\t"
         << "Algo 1\t\t"
         << "Algo 2\t\t"
         << "Algo 3" << endl
         << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "\t\t" << checkPrimeOne(arr[i]) << "\t\t" << checkPrimeTwo(arr[i]) << "\t\t" << checkPrimeThree(arr[i]) << endl;
    }

    return 0;
}