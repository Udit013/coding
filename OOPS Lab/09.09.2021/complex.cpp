/*1.Create a class complex which stores real and imaginary part of a 
 complex number. Include all types of constructors and destructor. 
 The destructor should display a message about the destructor being 
 invoked. Create objects using different constructors and display them.*/

#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    complex()
    {
        cout << "Enter the real part: ";
        cin >> real;
        cout << "Enter nthe imaginary part: ";
        cin >> img;
    }
    complex(int a, int b)
    {
        real = a;
        img = b;
    }
    complex(const complex &x, const complex &y)
    {
        real = x.real;
        img = y.img;
    }
    void display()
    {
        cout << "The Number : ";
        cout << real << "+" << img << "i" << endl;
    }
    ~complex()
    {
        cout << "Destructor called" << endl;
    }
};
int main()
{
    int real2, img2;
    cout << "Enter the real part: ";
    cin >> real2;
    cout << "Enter the imaginary part: ";
    cin >> img2;
    complex c2(real2, img2);
    c2.display();
    complex c4(c2);
    c4.display();
    complex c1;
    c1.display();
    complex c3(c1);
    c3.display();
    
    return 0;
}
