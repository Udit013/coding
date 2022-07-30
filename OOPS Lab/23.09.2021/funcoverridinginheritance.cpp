/*3.Write a program to assign the values to base class members
  at the time of creation of derived class object. The base class
  members are private members. Display the values of both base and 
  derived class using function overriding concept. */

#include <iostream>
using namespace std;

class Base
{
private:
    string base;

public:
    Base(string a)
    {
        cout << "Base class constructor " << endl;
        base = a;
    }

    void display()
    {
        cout << "The value of A in base class = " << base << endl;
    }

    ~Base()
    {
        cout << "Base class destructor " << endl;
    }
};
class Derived : public Base
{
private:
    string derived;

public:
    Derived(string a, string b) : Base(a)
    {
        derived = b;
        cout << "Derived class constructor " << endl;
    }

    void display()
    {
        cout << "The value of B in derived class = " << derived << endl;
    }

    ~Derived()
    {
        cout << "Derived class destructor " << endl;
    }
};

int main()
{
    Derived obj("Udit", "Agarwal");
    obj.Base::display();
    obj.display();
    return 0;
}