/*2.Write a program  to demonstrate the order of call of constructors
 and destructors in case of multi-level inheritance. */

 #include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Base class constructor" << endl;
    }
    ~Base()
    {
        cout << "Base class destructor" << endl;
    }
};
class DerivedOne : public Base
{
public:
    DerivedOne()
    {
        cout << "DerivedOne class constructor" << endl;
    }
    ~DerivedOne()
    {
        cout << "DerivedOne class destructor" << endl;
    }
};
class DerivedTwo : public DerivedOne
{
public:
    DerivedTwo()
    {
        cout << "DerivedTwo class constructor" << endl;
    }
    ~DerivedTwo()
    {
        cout << "DerivedTwo class destructor" << endl;
    }
};
int main()
{
    DerivedTwo d;
    return 0;
}