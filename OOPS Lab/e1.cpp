#include <iostream>
using namespace std;
class a{
public:
virtual void display(){
cout<<"In A";
};
class B{
public:
virtual void print() {
cout<<"In B";
}
};
class C: public a, public B{
void mydisplay() {
cout<<"My display in C";
}
};
int main()
{
cout<<"Size of class Cis"<<sizeof(C);
return 0;
}