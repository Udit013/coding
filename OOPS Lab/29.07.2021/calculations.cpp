#include <iostream>
using namespace std;
int main(){
    float n1,n2;
    int operation;
    cout<<"What Arithmetic Operation do you want to perform:\n";
    cout<<"Press 1 for Addition \n" ;
    cout<<"Press 2 for Subtraction\n";
    cout<<"Press 3 for Multiplication\n";
    cout<<"Press 4 for Division\n";
    cin>>operation;
    cout<<"Now Enter Two Numbers\n";
    cin>>n1>>n2;
    switch (operation){
        case 1:
        cout<< "Addition result:"<<n1+n2;
        break;

        case 2:
        cout<< "Subtraction result:"<<n1-n2;
        break;

        case 3:
        cout<< "Multiplication result:"<<n1*n2;
        break;

        case 4:
        cout<< "Quotient: "<<(int)n1/(int)n2;
        cout<< "\nRemainder: "<<(int)n1%(int)n2;
        break;

    }
    return 0;
        
}
    



 