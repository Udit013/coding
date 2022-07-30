// 1.Explain with an example how ambiguity is resolved in multipath inheritance.
#include <iostream>
using namespace std;
class A
{
public:
    A(int x)
    {
        cout << "A::A(int ) called" << endl;
    }
    A()
    {
        cout << "A::A() called" << endl;
    }
};

class B : virtual public A
{
public:
    B(int x) : A(x)
    {
        cout << "B::B(int ) called" << endl;
    }
};

class C : virtual public A
{
public:
    C(int x) : A(x)
    {
        cout << "C::C(int ) called" << endl;
    }
};

class D : public B, public C
{
public:
    D(int x) : C(x), B(x)
    {
        cout << "D::D(int ) called" << endl;
    }
};

int main()
{
    D d1(10);
}