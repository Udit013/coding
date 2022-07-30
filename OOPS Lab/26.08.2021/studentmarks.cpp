/*
2.Write a program to create a class to store details of a student 
(name, roll and 3 subject marks). Input details for 2 students and assign 
all the details of that student who is having higher average mark to a new student.
i) use member function
ii) use friend function
*/

#include <iostream>
using namespace std;

class Udit{
    string sec;
    int age;
    int marks[3];

    public:

        void display(){
            cout << "\nName = " << sec << endl;
            cout << "Roll = " << age << endl;
            int percentage = calculatePercent();
            cout << "Percentage secured: " << percentage << "%" << endl;
        }
        void input(){
            cout << "\nEnter name: " << flush;
            cin.ignore();
            getline(cin, sec);
            cout << "Roll = " << flush;
            cin >> age;
            cout << "Enter marks: " << flush;
            for(int i = 0; i < 3; i++)
                cin >> marks[i];
        }
        float calculatePercent(){
            int sum = 0; 
            for(int i = 0; i < 3; i++)
                sum+=marks[i];
            return sum/3.0;
        }
        friend Udit assignNewStudent(Udit s[], int n){
            int higherAvgIndex = 0;
            for(int i = 1; i < n; i++){
                if(s[i].calculatePercent() > s[higherAvgIndex].calculatePercent())
                    higherAvgIndex = i;
            }
            Udit newStudent;
            newStudent.sec = s[higherAvgIndex].sec;
            newStudent.age = s[higherAvgIndex].age;
            for(int i = 0; i < 3; i++)
                newStudent.marks[i] = s[higherAvgIndex].marks[i];
            return newStudent;
        }
};
int main(){
    string name;
    int roll, marks, n;
    cout << "Enter the number of students: " << flush;
    cin >> n;
    Udit s[n];
    for(int i = 0; i < n; i++){
        cout << "Enter details of student " << i+1 << flush;
        s[i].input();
    }
    for(int i = 0; i < n; i++){
        cout << "\nDetails of student " << i+1 << flush;
        s[i].display();
    }
    Udit newStudent = assignNewStudent(s, n);
    cout << "\nDetails of new student with highest marks: ";
    newStudent.display();  
}