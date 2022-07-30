/* 3.Overloading of assignment operator (=) is also possible by
 the user defined operator function. Justify by taking an example.*/


 #include <bits/stdc++.h>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        Complex(){}
        Complex(int x,int y)
        {
            real = x;
            img = y;
        }
        Complex operator = (Complex d)
        {
            real = d.real;
            img = d.img;
            return *this;
        }
        void display()
        {
            char op = '+';
            if(img<0)
                op = '-';
            cout<<real<<" "<<op<<" "<<img<<"i"<<endl; 
        }
};
int main()
{
    Complex c1(23,78),c2(60,45),c3,c4;
    cout<<"Complex number 1: ";
    c1.display();
    c3=c1;
    cout<<"Complex number 2: ";
    c2.display();
    c4=c2;
    cout<<"Complex number 3: ";
    c3.display();
    cout<<"Complex number 4: ";
    c4.display();
}