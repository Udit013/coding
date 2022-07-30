/* 
1.Create a class which stores name, roll number and total marks for a student. 
Input data for n students. Find the average marks scored by n students, 
store it as a data member of the class and display it using a function 
which may be called without object.
*/

#include <iostream>
using namespace std;

class Udit{
    public:
    float total_marks;
    static double avg;
    string sec;
    int age;

    void input(){
        cout << "\nEnter name: ";
        cin >> sec;

        cout << "\nEnter roll number: ";
        cin >> age;

        cout << "\nEnter total marks: ";
        cin >>total_marks;
    }
    void display(){
        cout << "\nName: " << sec << endl;
        cout << "Roll Number: " << age << endl;
        cout << "Total marks: " << total_marks << endl;
    }
    static void calcAvg(Udit arr[], int len){
        for(int i = 0; i < len; i++)
            avg += arr[i].total_marks;

        avg/=len;
    }

};
double Udit::avg=0.00;

int main(){
    cout << "Enter the number of students: " << endl;
    int n;
    cin >> n;
    Udit arr[n];
    for(int i = 0; i < n; i++){
        cout << "\nEnter details of student " << (i+1);
        arr[i].input();
    }
    cout << "Entered data: " << endl;
    for(int i = 0; i < n; i++)
        arr[i].display();
    Udit :: calcAvg(arr, n);
    cout << "Avergae of all students: " << Udit::avg << endl;

    return 0;
}
