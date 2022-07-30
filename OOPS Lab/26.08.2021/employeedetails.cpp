/*
3.Write a program to create a class to store details of an employee
 like name , age,  job_id and department name(common to all). 
 Input display details of 3 employees using array of objects concept.
*/
#include <iostream>
using namespace std;
 
class Employee{
public:
int id;
char name[50];
int age;
char dep[50];

public:   
void input(); 
void display(void);
};
void Employee:: input(){
    cout<<"\nEnter details :\n";
    cout<<"ID?: ";            
    cin>> id;
    cin.ignore();  
    cout<<"Name?: ";       
    gets(name);
    cout<<"Age?: ";            
    cin>> age;  
    cout<<"Department name ?: "; 
    cin.ignore();        
    gets(dep);   
}

void Employee:: display(void){
    cout<<id<<"\t"<<name<<"\t"<<age<<"\t"<<dep<<"\n"; 
}
int main(){
    Employee e[3];
 
    for(int i =0;i<3;i++){
        e[i].input();
    }    
    cout<<"\n\n\t     Employee Details:   \n\n";
    cout<<"Id\tName\tAge\tDepartment name\n";
    for(int i =0;i<3;i++){
        e[i].display();
        cout<<endl;
    }
    return 0;
}
