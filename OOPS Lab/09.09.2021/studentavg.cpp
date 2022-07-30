/*5.Write a program to create a class that stores name and subject
 marks of  two students. Using dynamic constructor allocate name
  and subject marks. Display the details along with average mark. */

#include <iostream>
#include <string>
using namespace std;

class student
{
    string name;
    float marks;

public:
    student()
    {
        name = "";
        marks = 0.0;
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter marks: ";
        cin >> marks;
        getchar();
    }
    void display()
    {
        cout << name << "  " << marks << endl;
    }
    float average(student s1)
    {
        float avg;
        avg = (this->marks + s1.marks) / 2.0;
        return avg;
    }
};

int main()
{
    student s1;
    student s2;
    float avg = s1.average(s2);
    s1.display();
    s2.display();
    cout << "Average marks = " << avg << endl;

    return 0;
}