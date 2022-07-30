#include <iostream>
using namespace std;
struct employee{
    int     eId;
    char name[100];
    float   salary;
};
 
int main()
{
    struct employee e;
    cout<<"\nEnter details :\n";
    cout<<"ID ?:";            
    cin>> e.eId;
    cout<<"Name ?:"; 
    cin.ignore();         
    gets(e.name); 
    cout<<"Salary ?:";       
    cin>> e.salary;
    cout<<"\nEntered detail is:";
    cout<<"\nId: " <<e.eId;
    cout<<"\nName: "<< e.name;
    cout<<"\nSalary:" << e.salary;
    return 0;
}