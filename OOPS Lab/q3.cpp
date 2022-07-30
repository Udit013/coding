/*Q.3. Write a program to create class with your
first name having data members age , average mark 
and section name as its private data members. Create 
another class with your state’s name that is having the
name of your city and plot number of your house as its
private data members. Input and display all the details 
by using friend class concept. */



#include<iostream>
#include<string>
using namespace std;

class WB;

class Udit
{
    int age;
    string section_name;
    float average_mark;
    friend void display(WB obj1, Udit obj2);
};

class WB
{
    string city;
    int plot;
    friend void display(WB obj1, Udit obj2);
};

void display(WB obj1, Udit obj2)
{
    cout << "Enter age: ";
    cin >> obj2.age;
    cout << "Enter section name: ";
    cin >> obj2.section_name;
    cout << "Enter average mark: ";
    cin >> obj2.average_mark;
    cout << "Enter city: ";
    cin >> obj1.city;
    cout << "Enter plot no: ";
    cin >> obj1.plot;
    cout << endl << "Displaying Details: ";
    cout << "\nAge: " << obj2.age;
    cout << "\nSection Name: " << obj2.section_name;
    cout << "\nAverage Mark: " << obj2.average_mark;
    cout << "\nCity: " << obj1.city;
    cout << "\nPlot Number: " << obj1.plot; 
}

int main()
{
    WB obj1;
    Udit obj2;
    
    display(obj1, obj2);
    return 0;
}