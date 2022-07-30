/*
1.Write a program to create a class “employee” having the details like name,age,
department_id and monthly salary as its secured data members.

i)Overload the binary  plus (+) operator to add DA as 15% of basic salary.

ii)Overload the greater than (>) operator to compare between the monthly salary
between two employees and display the details of the employee having higher salary.

iii)Overload the equals to (==) operator to verify whether the department id of two
employees are same or not.

(*perform the above tasks using member function and friend function)
*/

#include<iostream>
#include<string>

using namespace std;

class employee
{
    private:
        std::string name;
        int age;
        std::string department_id;
        double monthly_salary;

    public:

        void get()
        {
            cout<<"Enter name: ";
            getline(cin,name);
            cout<<"Enter age: ";
            cin>>age;
            cout<<"Enter department ID: ";
            cin.ignore();
            getline(cin, department_id);
            cout<<"Enter Salary: ";
            cin>>monthly_salary;
        }

        void put()
        {
            cout<<"Name: "<<name<<"\n";
            cout<<"Age: "<<age<<"\n";
            cout<<"Department ID: "<<department_id<<"\n";
            cout<<"Salary: "<<monthly_salary<<"\n";
        }

        double salary()
        {
            return monthly_salary;
        }

        void operator + (double DA);
        friend void operator > (employee &,employee &);
        friend void operator == (employee &,employee &);
};

void employee::operator + (double DA)
{
    this->monthly_salary += DA;
}

void operator > (employee &i,employee &j)
{
    (i.monthly_salary > j.monthly_salary)? i.put():j.put(); 
}

void operator == (employee &k,employee &l)
{
    if(!k.department_id.compare(l.department_id))
        cout<<"Same!\n";
    else 
        cout<<"Different!\n";
}


int main()
{
    employee ob1,ob2;

    cout<<"Enter details of employee 1 :"<<endl;
    ob1.get();
    cin.ignore();

    cout<<"Enter details of employee 2 :"<<endl;
    ob2.get();

    ob1 + (ob1.salary() * (0.15));
    ob2 + (ob2.salary() * (0.15));

    cout<<"The details of the employee having higher salary :"<<endl;
    ob1>ob2;

    cout<<"Department check : "<<endl;
    ob1==ob2;

    return 0;
}
