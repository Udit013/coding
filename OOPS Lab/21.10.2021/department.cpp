/*2.Write a program to create a class “department” that stores
 the department name and department_id as its private member. 
 Derive a class “employee” from department which is having employee 
 name,age and employee_id. Derive another class “accounts” from
 “department” in protected mode which is having monthly basic salary,
 DA(15% of basic salary ) and HRA (10% of basic salary ). Display all 
 the details of an employee along with monthly salary (basic salary+DA+HRA) 
 using necessary member functions.*/

#include <iostream>
#include <string>

using namespace std;
class Department
{
private:
    string dep_name;
    string dep_id;

public:
    void get()
    {
        cout << "Enter department name: ";
        cin >> dep_name;
        cout << "Enter department id: ";
        cin >> dep_id;
    }

    void put()
    {
        cout << "Department: " << dep_name << " (" << dep_id << ")\n";
    }
};
class Employee : private Department
{
private:
    string emp_name;
    string emp_id;
    int emp_age;

public:
    void get()
    {
        cout << "Enter employee name: ";
        getline(cin, emp_name);
        cout << "Enter employee id: ";
        cin >> emp_id;
        cout << "Enter employee age: ";
        cin >> emp_age;
        Department::get();
    }

    void put()
    {
        cout << "Name: " << emp_name << " (" << emp_id << ")\n";
        cout << "Age: " << emp_age << endl;
    }
};
class Accounts : protected Department
{
private:
    float basic_salary;
    float da;
    float hra;
public:
    void get()
    {
        cout << "Enter basic salary: ";
        cin >> basic_salary;
        da = basic_salary / 15;
        hra = basic_salary / 10;
    }

    void put()
    {
        cout << "Basic salary: " << basic_salary << endl;
        cout << "DA: " << da << endl;
        cout << "HRA: " << hra << endl;
        Department::put();
    }
};
int main()
{
    Employee *emp = new Employee;
    Accounts *acu = new Accounts;

    emp->get();
    acu->get();

    *((Department *)acu) = *((Department *)emp);

    cout << "\n\nOUTPUT:\n\n";
    emp->put();
    acu->put();

    delete emp;
    delete acu;
    return 0;
}