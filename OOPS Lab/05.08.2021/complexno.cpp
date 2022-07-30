#include <iostream>
using namespace std;
 class Complex
{
public:
int real[10],imag[10];
public:   
void input(void);  
void display(void);
};
void Complex:: input(void){
    for(int i=0;i<10;i++){
        cout<<"\nEnter real part: ";
        cin >> real[i];
        cout<< "Enter imaginary part: ";
        cin >> imag[i];
    }   
}
void Complex:: display(void){
    for(int i=0;i<10;i++){
        if(imag[i]>0){
            cout<<real[i]<<"+"<<imag[i]<<"i"<<endl;
        }
        if(imag[i]<0){
            cout<<real[i]<<imag[i]<<"i"<<endl;
        }
    }
}
int main(){
    Complex com;
    com.input();
    cout<<endl;
    com.display();
    return 0;
}