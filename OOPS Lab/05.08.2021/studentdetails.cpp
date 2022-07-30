#include <iostream>
using namespace std;
class Udit{
    public:
    char name[100];
    int age;
    int marks;
}st;

int main(){
    
    cout<<"Enter name of student:\n ";
    gets(st.name);
    cout<<"\nEnter roll number of student:\n ";
    cin >> st.age;
    cout<<"\nEnter total marks of student:\n ";
    cin >> st.marks;
    cout<< "\nThe name of the student is "<<st.name;
    cout<< "\nThe roll number of the student  is "<<st.age;
    cout<< "\nThe total marks of the student is "<<st.marks;
    return 0;

}

