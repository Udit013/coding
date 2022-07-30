/*1.Write a program in C++ to create two classes separately 
each having one integer value as its privatedata member. Compare 
both the values and display in main functions whether the values 
are equal or not. Use pass by address method to execute the code.*/

#include <iostream>
using namespace std;

class B;
class A
{
private:
    int a;

public:
    void input()
    {

        cout << "Enter the value of integer a: ";
        cin >> a;
    }
    friend int compare(A *, B *);
};
class B
{
private:
    int b;

public:
    void input()
    {
        cout << "Enter the value of integer b: ";
        cin >> b;
    }
    friend int compare(A *, B *);
};
int compare(A *p, B *q)
{
    if (p->a == q->b)
        return 1;
    else
        return 0;
}
int main()
{
    A obja;
    B objb;
    obja.input();
    objb.input();
    if (compare(&obja, &objb) == 1)
        cout << "The values are equal " << endl;
    else
        cout << "The values are not equal " << endl;
    return 0;
}
