#include <iostream>
using namespace std;
class student{
    public:
    char name[100];
    int roll;
    int m1,m2,m3,m4,m5;
}st;

int main(){
    int total_marks=0;
    float per;
    cout<<"Enter name of student:\n ";
    gets(st.name);
    cout<<"\nEnter roll number of student:\n ";
    cin >> st.roll;
    cout<<"\nEnter marks of subject 1: \n ";
    cin >> st.m1;
    cout<<"\nEnter marks of subject 2: \n ";
    cin >> st.m2;
    cout<<"\nEnter marks of subject 3: \n ";
    cin >> st.m3;
    cout<<"\nEnter marks of subject 4: \n ";
    cin >> st.m4;
    cout<<"\nEnter marks of subject 5: \n ";
    cin >> st.m5;
    total_marks= st.m1+st.m2+st.m3+st.m4+st.m5;
    per= (total_marks/500.0)*100.0;

    cout<< "\nThe name of the student is "<<st.name;
    cout<< "\nThe roll number of the student  is "<<st.roll;
    cout<< "\nThe percentage obtained by the student is "<<per <<"%";
    return 0;
}