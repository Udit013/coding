/* Write a program myProg.cpp that takes input strings (student names) as command line
arguments and outputs a greeting, message to all of them. The program once compiled into
myProg should run as below at command line:
./myProg neha kirti divya
Hello Neha, Kirti and Divya, Welcome to IGIT!
// Output */

#include <iostream>
using namespace std;
  
int main(int argc, char* argv[])
{
   cout << "Hello ";
        int len = argc;
        for(int i = 1; i < len; i++){
            if(len==2)
                cout << argv[i] << ", ";
            else if(i == len-1)
                cout << "and " << argv[i] << ", ";
            else if(i == len-2)
                cout << argv[i] << " ";
            else
                cout << argv[i] << ", ";
        }
        cout << "Welcome to IGIT!";
    
    return 0;
}