/*Write a program which takes as input a string and converts it 
into its equivalent number and returns the same.*/

#include<iostream>
using namespace std;

int main()
{
    char ch, str[50];
    int val;
    cout<<"\nEnter the String: ";
    gets(str);
    cout<<"\nEquivalent numerical value of the String is: ";
    for(int i=0;str[i]!='\0';i++)
    {
        ch = str[i];
        val = ch;
        cout<<val;
    }
    cout<<endl;
    return 0;
}
    
