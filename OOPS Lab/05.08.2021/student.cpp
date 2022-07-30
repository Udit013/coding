#include <iostream>
using namespace std;
struct student
{
    char name[40];
    int roll;
    float marks[5];
};
int main()
{
    struct student s1;
    cout << "Enter Name: ";
    cin >> s1.name;
    cout << "Enter Roll No. : ";
    cin >> s1.roll;
    cout << "Enter Marks:-\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> s1.marks[i];
    }
    cout <<"\n\n";
    cout << "OUTPUT\n\n";
    cout << "Name: " << s1.name << endl;
    cout << "Roll No. : " << s1.roll << endl;    
    cout << "Marks:-" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject" << i + 1 << ":";
        cout << s1.marks[i] << endl;
    }
    return 0;
}