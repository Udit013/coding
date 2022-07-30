#include <iostream>
using namespace std;

class Distance{
public:
int feet,inch;
public:   
void input(); 
void add(Distance d1, Distance d2);
void display();
};
void Distance:: input(){
    cout << " feet: "; 
    cin >> feet;
    cout << "inches: ";
    cin >> inch;
}   
void Distance::add(Distance d1, Distance d2){
	feet = d1.feet + d2.feet;
	inch = d1.inch + d2.inch;
	feet = feet + (inch / 12);
	inch = inch % 12;
}
void Distance:: display(){
    cout << "feet: " << feet;
    cout << " inches: " << inch;
}
int main(){
    Distance d1,d2,d3;
    cout << "Enter length of Distance 1: " << endl;
    d1.input();
    cout << "Enter length of Distance 2: " << endl;
    d2.input();
    d3.add(d1,d2);
    cout<<endl;
    d3.display();
    return 0;
}


