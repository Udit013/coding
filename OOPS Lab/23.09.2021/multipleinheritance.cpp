/*1.Write a program  to demonstrate the order of call of constructors
 and destructors in case of multiple inheritance.  */

#include <iostream>
using namespace std;
class FirstBase
{
public:
    FirstBase()
    {
        cout << "FirstBase class constructor" << endl;
    }
    ~FirstBase()
    {
        cout << "FirstBase class destructor" << endl;
    }
};
class SecondBase
{
public:
    SecondBase()
    {
        cout << "SecondBase class constructor" << endl;
    }
    ~SecondBase()
    {
        cout << "SecondBase class destructor" << endl;
    }
};
class Derived : public FirstBase, public SecondBase
{
public:
    Derived()
    {
        cout << "Derived class constructor" << endl;
    }
    ~Derived()
    {
        cout << "Derived class destructor" << endl;
    }
};
int main()
{
    Derived d;
    return 0;
}