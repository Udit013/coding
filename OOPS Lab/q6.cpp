/*Q.6.Write a program to read the alternate characters 
from ith position to jth position where i>j and write
 to a new file. (i and j are user input values from keyboard) */

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch;
    int i=0; 
    int j = 0;
    ifstream file("f1.txt", ios::out);
    cout << "Enter the first and last index: ";
    cin >> i >> j;
    file.seekg(i, ios::beg);
    int first = file.tellg();
    file.seekg( j,ios::beg);
    int last = file.tellg();

    file.seekg(i, ios::beg);

    while(first!=last)
    {
        if(file.eof())
        break;
        file.get(ch);
        cout << ch;
        first = first+2;
        file.seekg(first, ios::beg);
    }
    file.close();
}