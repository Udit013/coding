/* 4.Write a program to create a class “company” that stores the name 
and year of establishment of a company. Derive a class  “employee” from
 “company” that store the details of  an employee  like name, age,
 designation and employee code. Derive another class “department” 
 from “company” that store the department name, number of employees 
 and department id. Using necessary member functions display all the
  details of the company. */

#include <iostream>
using namespace std;

class company
{
protected:
    string companyName;
    int yearESTD;

public:
    void getCompanyDetails()
    {
        cout << "Enter name of company: ";
        getline(cin, companyName);
        cout << "Enter year of establishment: ";
        cin >> yearESTD;
    }
};

class employee : public company
{
protected:
    string employeeName;
    string designation;
    int age;
    int employeeCode;

public:
    void getEmployeeDetails()
    {
        cout << "Enter name of employee: ";
        cin.ignore();
        getline(cin, employeeName);
        cout << "Enter designation: ";
        getline(cin, designation);
        cout << "Enter age and employe code: ";
        cin >> age >> employeeCode;
    }

    void displayEmployeeDetails()
    {
        cout << "\nEmployee name: " << employeeName << endl;
        cout << "Employee code: " << employeeCode << endl;
        cout << "Employee age: " << age << endl;
        cout << "Employee designation: " << designation << endl;
    }
};

class department : public company
{
protected:
    string departmentName;
    int numberOfEmployees;
    int departmentID;

public:
    void getDepartmentDetails()
    {
        cout << "Enter name of department: ";
        cin.ignore();
        getline(cin, departmentName);
        cout << "Enter number of employees: ";
        cin >> numberOfEmployees;
        cout << "Enter department id: ";
        cin >> departmentID;
    }

    void displayEmployeeDetails()
    {
        cout << "\nDepartment name: " << departmentName << endl;
        cout << "Department ID: " << departmentID << endl;
        cout << "Number of employees: " << numberOfEmployees << endl;
    }

    void displayCompanyDetails()
    {
        cout << "\nComapny name: " << companyName << endl;
        cout << "Year of establishment: " << yearESTD << endl;
    }
};

int main()
{
    employee e1;
    department d1;

    d1.getCompanyDetails();
    d1.getDepartmentDetails();
    e1.getEmployeeDetails();

    d1.displayCompanyDetails();
    d1.displayEmployeeDetails();
    e1.displayEmployeeDetails();
}