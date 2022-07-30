/*Q.4.Write a program to  create a function that accepts
 the phone number as its argument.The phone number is 
 printed if accepted with following constraints else manage 
 with proper exception.
i)  it has exactly  10 digits
ii) only numbers between 0-9 are accepted
iii) first digit can’t be zero
iv) last four digits can’t be zero */

#include <bits/stdc++.h>
using namespace std;
void phonenocheck(string s_556)
{
    try
    {
        int n_556 = s_556.length();
        if (n_556 != 10)
            throw "Invalid number";
        for (int i = 0; i < n_556; i++)
        {
            if (s_556[i] < '0' || s_556[i] > '9')
                throw "Invalid number";
        }
        if(s_556[0] == '0')
            throw "Invalid number";
        if (s_556[6] == '0' || s_556[7] == '0' || s_556[8] == '0' || s_556[9] == '0')
            throw "Invalid number";
        cout << "Valid number" << endl;
    }
    catch(const char* msg_556)
    {
        cout << msg_556 << endl;
    }
}
int main()
{
    string s_556;
    cout << "Enter a phone number: ";
    cin >> s_556;
    phonenocheck(s_556);
    return 0;
}