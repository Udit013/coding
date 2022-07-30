/*3.Create a class which stores a string and its length as data members. 
 Include all the constructors. Include a member function to join
 two strings and display the concatenated string. */

#include <iostream>
#include <string.h>
using namespace std;
class String
{
    int length;
    char *name;

public:
    String()
    {
        length = 0;
        name = new char;
    }
    String(char *s)
    {
        name = new char[strlen(s) + 1];
        length = strlen(s);
        strcpy(name, s);
    }
    ~String()
    {
        delete name;
    }
    void join(String &s1, String &s2)
    {
        length = s1.length + s2.length;
        name = new char[length + 1];
        strcpy(name, s1.name);
        strcat(name, s2.name);
    }
    void display()
    {
        cout << "The string : " << name << endl;
    }
    void display1()
    {
        cout << "\nThe Concatenated String : \n"
             << name << endl;
    }
};
int main()
{
    char name1[20];
    cout<< "Enter the first string: ";
    gets(name1);
    char name2[20];
    cout<< "Enter the second string: ";
    gets(name2);
    String c1(name1), c2(name2), c3;
    c3.join(c1, c2);
    c1.display();
    c2.display();
    c3.display1();
    return 0;
}
