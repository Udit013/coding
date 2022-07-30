/*
WAP to find area of a circle, a rectangle and a triangle, 
using concept of function overloading.
*/
#include <iostream>
#include <cmath>

using namespace std;
struct Shape{
    float r;
    int le,br;
    float s1,s2,s3;
};

void calc(float ra)
{
    float ar = 3.14 * ra * ra;
    cout << "Area of circle= " << ar;
}
void calc(int le, int br)
{
    int ar = le * br;
    cout << "Area of rectangle= " << ar;
}
void calc( float s1,float s2,float s3)
{
    float s;
    s = (s1+s2+s3)/2;
    float ar = sqrt(s*(s-s1)*(s-s2)*(s-s3));                 
    cout << "Area of triangle= " << ar;
}

int main()
{
    struct Shape s,c,r,t;
    int ch;
    do{
        cout << "\nEnter your choice for area:\n1 for Circle\n2 for Rectangle \n3 for Triangle\n4 Exit  \n"<<endl;
        cin >> ch;
        switch(ch){
            
            case 1:
            cout << "Enter the radius ";
            cin >> c.r;
            calc(c.r);
            break;
        
            case 2:
            cout << "Enter Length and Breadth ";
            cin >> r.le >> r.br;
            calc(r.le, r.br);
            break;
        
            case 3:
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
    }while(ch>=1&&ch<=3);
    return 0;
}