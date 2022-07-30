//Q.2. Write a program to read the last word from a file and print to output screen.

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char str[15];
    ifstream in;
    in.open("file one.txt", ios::in);

    in.seekg(0, ios::end);
    int len = in.tellg();

    char ch;
    int i=0;
    while(len--) 
    {
        in.seekg(len, ios::beg);
        in.get(ch);

        if(ch==' ') break;
        str[i++] = ch;
    }

    while(i--)
    {
        cout<<str[i];
    }
    return 0;
}