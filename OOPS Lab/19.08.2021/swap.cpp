//WAP to swap two integers using pass by reference.
#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int t = x;
    x = y;
    y = t;
}
int main() {
    int num1;
    int num2;
    cout<<"Enter two values:";
    cin>>num1>>num2;

    cout << "Before swap: " << "\n";
    cout <<"First number:"<<num1 <<" Second number:"<< num2 << "\n";
    swap(num1, num2);
    cout << "After swap: " << "\n";
    cout <<"First number:"<<num1 <<" Second number:"<< num2 << "\n";

    return 0;
}