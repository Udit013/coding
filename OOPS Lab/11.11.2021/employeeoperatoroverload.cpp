/* 1.Write a program to create a class employee that has the members
 like name,age,department name and salary of the employee as its 
 data members.Overload the new operator by user to allocate memory 
 for two employees and input the details by calling member functions
 and display the details to output screen. */

#include <bits/stdc++.h>
using namespace std;
class employee
{
private:
    string name, dept_name;
    int age, sal;

public:
    employee(){};
    employee(string a, int b, string c, int d)
    {
        name = a;
        age = b;
        dept_name = c;
        sal = d;
    }
    void disp()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "Department Name:" << dept_name << endl;
        cout << "Salary:" << sal << endl;
    }
    void *operator new(size_t size)
    {
        void *p;
        p = malloc(size);
        return p;
    }
};
int main()
{
    employee *a = new employee("Udit", 19, "IT", 100000);
    employee *b = new employee("Shenron", 20, "Financial", 50000);
    a->disp();
    b->disp();
}