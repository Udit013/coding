//1.Write a program to swap private data member of two classes.

#include <iostream>
using namespace std;
class B;
class A
{
private:
    int p;

public:
    void inputA()
    {
        cout << "\nEnter the value of P: ";
        cin >> p;
    }
    void displayA()
    {
        cout << "The value of P is: " << p;
    }
    friend void swap(class A, class B);
};
class B
{
private:
    int q;

public:
    void inputB()
    {
        cout << "Enter the value of Q: ";
        cin >> q;
    }
    void displayB()
    {
        cout << "\nThe value of Q is: " << q;
    }
    friend void swap(class A, class B);
};
void swap(A objA, B objB)
{
    int temp = objA.p;
    objA.p = objB.q;
    objB.q = temp;
    cout << "The value of P is: " << objA.p;
    cout << "\nThe value of Q is: " << objB.q;
}
int main()
{
    A obA;
    B obB;
    obA.inputA();
    obB.inputB();
    cout << "\nThe values of P and Q before Swapping: \n";
    obA.displayA();
    obB.displayB();
    cout << "\n\nThe values of P and Q after Swapping: \n";
    swap(obA, obB);
    return 0;
}
