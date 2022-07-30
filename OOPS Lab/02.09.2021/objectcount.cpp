/*
4.Write a program to count number of objects created from a class
 using concept of static data member and static member function.
*/

#include <iostream>
using namespace std;
class counter
{
private:
    static int count;

public:
    counter()
    {
        count++;
    }
    void display()
    {
        cout << "\nThe number of objects created are: \n" << count;
    }
};
int counter::count = 0;
int main()
{
    counter c1;
    counter c2;
    counter c3;
    c2.display();
}