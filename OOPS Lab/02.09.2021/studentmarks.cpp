/*
3.Write a program to create a class “student” that stores name and roll number
of a student. Create another class “marks” that stores three subject marks. 
Print the details of  two students along with average mark by using
i)A common friend function to both the classes
ii)Making a member function of “student” class as friendly to “marks” class.
*/

#include <iostream>
#include <string>
using namespace std;

class WestBengal;
class Udit
{
private:
    string sec;
    int age;
    

public:
    void inputName()
    {
        cout << "\nEnter section: ";
        getline(cin, sec);
        cout << "Enter age: ";
        cin >> age;
    }
    friend void average(class Udit, class WestBengal);
    void friendlyDisplay(WestBengal m);
};
class WestBengal
{
private:
    int s1, s2, s3;

public:
    void inputMarks()
    {
        cout << "Enter marks of subject 1: ";
        cin >> s1;
        cout << "Enter marks of subject 2: ";
        cin >> s2;
        cout << "Enter marks of subject 3: ";
        cin >> s3;
    }
    friend void average(class Udit, class WestBengal);
    friend void Udit::friendlyDisplay(WestBengal m);
};
void average(Udit info, WestBengal m)
{
    float avg;
    avg = (m.s1 + m.s2 + m.s3) / 3;
    cout << "\nStudent Details:-\n";
    cout << "Name: " << info.sec;
    cout << "\nRoll no.: " << info.age;
    cout << "\nAverage: " << avg;
}
void Udit::friendlyDisplay(WestBengal m)
{
    cout << "\nStudent Details:-\n";
    cout << "Name = " << sec << endl;
    cout << "Roll = " << age << endl;
    float avg;
    avg = (m.s1 + m.s2 + m.s3) / 3;
    cout << "Average: " << avg;
}
int main()
{
    Udit details;
    WestBengal m;
    details.inputName();
    m.inputMarks();
    cout << "\nStudent details using common Friend." ;
    average(details, m);
    cout << "\n\nStudent details using member of Student friend of Marks.";
    details.friendlyDisplay(m);
    return 0;
}