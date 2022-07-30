/*4.Write a program to demonstrate the order of call of 
 constructors and destructors for a class*/

#include <iostream>
using namespace std;
class A
{
    static int i;

public:
    A()
    {
        cout << "Object " << ++i << " constructor called " << endl;
    }
    ~A()
    {
        cout << "Object " << i-- << " destructor called" << std::endl;
    }
};
int A::i;
int main()
{
    A a1;
    A a2;
    return 0;
}
