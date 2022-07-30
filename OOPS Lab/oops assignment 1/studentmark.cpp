/*2.Write a program in C++ to create a class to take student subject marks and name (dynamically as
per users input) for two students at the time of creation of objects. Display the details of two
students along with the average mark by calling member function.Also deallocate the memory using
destructor function.*/

#include <iostream>

using namespace std;

class Udit
{
private:
    char *name;
    float *marks;

public:
    int n;
    Udit()
    {
        name = new char[20];
        marks = new float[n];
        cout << "\nEnter name: ";
        cin >> name;
        cout << "Enter the number of subjects: ";
        cin >> n;
        cout << "Enter marks: ";
        for (int i = 0; i < n; i++)
        {
            cin >> marks[i];
        }
    }
    void display()
    {
        float avg = 0;
        for (int i = 0; i < n; i++)
        {
            avg += marks[i];
        }
        cout << "\nName: " << name << "\tAvg: " << avg / n ;
    }
    ~Udit()
    {
        delete[] name;
        delete[] marks;
    }
};
int main()
{
    Udit student[2];
    student[0].display();
    student[1].display();
    return 0;
}