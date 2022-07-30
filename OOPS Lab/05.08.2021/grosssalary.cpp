#include <iostream>
using namespace std;
 
class Employee{
public:
int id;
char name[100];
int age;
float basic,da,hra,gross;
public:   
void input(); 
void calc(); 
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
    cout<<"Basic Salary ?:";       
    cin>> basic;   
}
void Employee:: calc(){
    da= 0.80*basic;
    hra= 0.10*basic;
    gross= basic+da+hra;
}
void Employee:: display(void){
    cout<<id<<"\t"<<name<<"\t"<<age<<"\t"<<basic<<"\t"<<gross<<"\n"; 
}
int main(){
    Employee e[100];
    int n;
    cout<<"\n Enter the number of employees: ";
    cin>>n;
    for(int i =0;i<n;i++){
        e[i].input();
        e[i].calc();
    }    
    cout<<"\n\n\t     Employee Details:   \n\n";
    cout<<"Id\tName\tAge\tBasic\tGross\n";
    for(int i =0;i<n;i++){
        e[i].display();
        cout<<endl;
    }
    return 0;
}


