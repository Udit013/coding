/*3.Write a program to justify the invoke of parameterized constructors in  
inheritance. Use the base initialization method to initialize the data members
of base and derived class. Display the values by calling necessary member functions. */

#include <iostream>
using namespace std;
class Base
{
private:
	int x;

public:
	Base(int x) : x(x) {}
	void display()
	{
		cout << "Base: " << x << endl;
	}
};
class Child : public Base
{
private:
	int y;

public:
	Child(int x, int y) : Base(x), y(y) {}
	void display()
	{
		cout << "Child: " << y << endl;
	}
};
int main()
{
	Child obj(1, 2);
	obj.display();
	obj.Base::display();
	return 0;
}