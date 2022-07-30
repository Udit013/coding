/*Q1. Write a program to create a file. Input user defined data entered from keyboard and write to the
file. Read the contents of the file in reverse order and store to another file.
(for example if “hello” is entered to first file then “olleh” must be written to the new file) */

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string input;
    ofstream out;
    out.open("file one.txt",ios::out);
    getline(cin, input);
    out<<input<<endl;
    out.close();
    out.open("file two.txt", ios::out);
    ifstream in;
    in.open("file one.txt", ios::in);
    in.seekg(-1, ios::end);
    int len = in.tellg();
    char ch;
    while(len--) {
        in.seekg(len, ios::beg);
        in.get(ch);
        out.put(ch);
    }
    in.seekg(-1,ios::end);
    in.get(ch);
    out.put(ch);
    return 0;
}