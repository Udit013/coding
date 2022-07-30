#include <iostream>
#include <cmath>
using namespace std;
 
class point{
public:
int x,y;
float dist;
public:   
void input(); 
void add(point p1, point p2);
void display();
};
void point:: input(){
    cout << "Enter the x coordinate: ";
    cin >> x;
  
    cout << "Enter the y coordinate: ";
    cin >> y;
}  
void point:: add(point p1, point p2)
{
    x = (p2.x-p1.x);
    y = (p2.y-p1.y);
    dist = sqrt(x*x + y*y);
}
void point:: display()
{
    cout << "The distance between the two points is: " << dist;
}
int main(){
    point p1,p2,d;
    cout << "Enter the coordinates of point 1: " << endl;
    p1.input();
    cout << "Enter the coordinates of point 2: " << endl;
    p2.input();
    d.add(p1,p2);
    cout<<endl;
    d.display();
    return 0;
}