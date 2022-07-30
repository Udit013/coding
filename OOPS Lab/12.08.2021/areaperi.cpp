/*Write a program that calculates area and perimeter of the following geometric figures. Your
program should use function overloading and each function should take as inputs the required
arguments (without constraining the user) and return both area and perimeter (make use of an
appropriate structure to do so).
a. Square
b. Circle
c. Rectangle
d.Triangle */

#include <iostream>
#include <cmath>

using namespace std;
struct Shape{
    double side;
    float r;
    int le,br;
    float s1,s2,s3;
};
void calc(double sid)
{
    double ar = (sid*sid);
    double peri = 4*sid;
    cout << "Area of square= " << ar;
    cout<< "\nPerimeter of Square= "<<peri;
}
void calc(float ra)
{
    float ar = 3.14 * ra * ra;
    float peri = 2*3.14*ra;
    cout << "Area of circle= " << ar;
    cout<< "\nCircumference of circle= "<<peri;
}
void calc(int le, int br)
{
    int ar = le * br;
    int peri = 2*(le +br);
    cout << "Area of rectangle= " << ar;
    cout<< "\nPerimeter of rectangle= "<<peri;
}
void calc( float s1,float s2,float s3)
{
    float s;
    s = (s1+s2+s3)/2;
    float ar = sqrt(s*(s-s1)*(s-s2)*(s-s3));
    float peri= s1+s2+s3;                   
    cout << "Area of triangle= " << ar;
    cout<< "\nPerimeter of triangle= "<<peri;
}

int main()
{
    struct Shape s,c,r,t;
    int ch;
    do{
        cout << "\nEnter your choice for area and perimeter:\n1 for Square\n2 for Circle\n3 for Rectangle \n4 for Triangle\n5 Exit  \n"<<endl;
        cin >> ch;
        switch(ch){
            case 1:
            cout << "Enter side ";
            cin >> s.side ;
            calc(s.side); 
            break;
    
            case 2:
            cout << "Enter the radius ";
            cin >> c.r;
            calc(c.r);
            break;
        
            case 3:
            cout << "Enter Length and Breadth ";
            cin >> r.le >> r.br;
            calc(r.le, r.br);
            break;
        
            case 4:
            cout << "\nEnter the sides of triangle ";
            cin >> t.s1>>t.s2>>t.s3;
            if (t.s1 + t.s2 <= t.s3 || t.s1 + t.s3 <= t.s2 || t.s2 + t.s3 <= t.s1)
                cout<<"Invalid input";
            else
                calc(t.s1,t.s2,t.s3);   
            break;

            default: cout << "Exiting" << endl; 
            break;
        }
        cout<<endl;
    }while(ch>=1&&ch<=4);
    return 0;
}
