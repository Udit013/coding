#include <iostream>
using namespace std;
void temp(){
        float fa,ce;
    int choice;
    cout<<"\n1: Fahrenheit to Celsius."; 
    cout<<"\n2: Celsius to Fahrenheit.";
    cout<<"\nEnter your choice (1/2): ";
    cin>>choice;
    if(choice ==1){
        cout<<"\nEnter temperature in Fahrenheit: ";
        cin>>fa;
        ce= (fa - 32) / 1.8;
        cout<<"\nTemperature in Celsius: "<<ce;
    }
    else if(choice==2){
        cout<< "\nEnter temperature in Celsius: ";
        cin>>ce;
        fa= (ce*1.8)+32;
        cout<<"\nTemperature in Fahrenheit: "<<fa;
    }
    else{
        cout<<"\nWrong Choice ";
    }
    }
    void height(){
        float cm,feet;
        float inch;
    int choice2;
    cout<<"\n1: Centimeters to feet and inches."; 
    cout<<"\n2: Feet to centimeter.";
    cout<<"\nEnter your choice (1/2): ";
    cin>>choice2;
    if(choice2 ==1){
        cout<<"\nEnter the height in centimeters: ";
        cin>>cm;
        feet = cm/30.48;
        inch = (feet-(int)feet)*12;
        
        cout<<"\nFeet is: "<<(int)feet;
        cout<<"\nInches is: "<<inch;
    }
    else if(choice2==2){
        cout<< "\nEnter theight in feet ";
        cin>>feet;
        cm=feet*30.48;
        cout<<"\nHeight in centimeter is "<<cm;
    }
    else{
        cout<<"\nWrong Choice ";
    }

    }
int main()
{ 
    int ch;
    cout<<"\n1: Temperature conversion"; 
    cout<<"\n2: Height conversion";
    cout<<"\nEnter your choice (1/2): ";
    cin>>ch;
    if(ch ==1)
    temp();
    else if(ch==2)
    height();
    else
    cout<<"\nwrong choice";
    return 0;
}
