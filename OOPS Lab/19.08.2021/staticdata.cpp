/*
Static data members of a class occupy memory once whereas 
non static data members occupy members as per the number of objects created. 
Justify the statement by writing a program.
*/

#include <iostream>
using namespace std;

void func1(){
    static int a = 0;
    cout << "value of static variable a = " << a++ << endl;
}
void func2(){
    int a = 0;
    cout << "Value of non-static variable a = " << a++ << endl;
}
int main(){
    for (int i = 0; i < 4; i++){
        func1();
        func2();
    }
    return 0;
}
