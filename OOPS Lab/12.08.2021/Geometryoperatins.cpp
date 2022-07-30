/*Create a structure point with X-coordinate and Y-coordinate and perform the following
geometric operations using functions:-
a. Given two end points of line segment, find length of line segment.
b. Given a circle C (centre point and radius) and a point P, find if point P lies inside the
circle or outside.
c. Given two line segments, find if they are parallel or not.
d. Given all three coordinates of a triangle, verify if a valid triangle can be formed, if yes
then calculate area of triangle.*/

#include<iostream>
#include<cmath>
using namespace std; 
struct Point{
    float x; 
    float y;
};
float length_of_line(Point,Point);
bool is_inside_circle(Point,float,Point);
bool is_parallel(Point,Point,Point,Point); 
float area_of_triangle(Point,Point,Point); 
void input(Point&);

float length_of_line(Point a,Point b){
    return sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2));
}
bool is_inside_circle(Point centre,float radius,Point P)
{
    float dist = length_of_line(centre,P); 
    if(dist<=radius) return true;
    return false;
}
bool is_parallel(Point a,Point b,Point p,Point q)
{
    float m1 = (b.y-a.y)/(b.x-a.x);
    float m2 = (q.y-p.y)/(q.x-p.x); 
    if(m1==m2) 
        return true; 
    return false;
}
float area_of_triangle(Point a,Point b,Point c)
{
    float area = (b.x*c.y - c.x*b.y) - (a.x*c.y - c.x*a.y) + (a.x*b.y - b.x*a.y); 
    return abs(area/2);
}
void input(Point &a) { cin>>a.x>>a.y; }

int main(){
    int radius,choice; 
    Point a,b,c,d; 
    do{
        cout<<"Enter Your Choice:\n1) Length of a Line Segment\n"; 
        cout<<"2) Is point inside the circle?\n3) Are the lines Parallel?\n"; 
        cout<<"4) What is the area of the triangle?\n5) Exit\n->:"; 
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"Enter Point 1: "; 
            input(a);
            cout<<"Enter Point 2: "; 
            input(b);
            cout<<"=Length: "<<length_of_line(a,b)<<endl;
            break;

            case 2:
            cout<<"Enter circle's centre point: "; 
            input(a);
            cout<<"Enter circle's radius: "; 
            cin>>radius;
            cout<<"Enter the point: "; 
            input(b);
            cout<<"=The point is "; 
            cout<<(is_inside_circle(a,radius,b)?"Inside\n":"Outside\n"); 
            break;

            case 3:
            cout<<"Line 1:	\nPoint 1: ";
            input(a); 
            cout<<"Point 2: "; 
            input(b);
            cout<<"Line 2:	\nPoint 1: ";
            input(c); 
            cout<<"Point 2: "; 
            input(d);
            cout<<"=The lines are "; 
            cout<<(is_parallel(a,b,c,d)?"parallel\n":"Not Parallel\n"); 
            break;

            case 4:
            cout<<"Enter Vertex 1: "; 
            input(a);
            cout<<"Enter Vertex 2: "; 
            input(b);
            cout<<"Enter Vertex 3: "; 
            input(c); 
            if(area_of_triangle(a,b,c)){
                cout<<"=Area: "<<area_of_triangle(a,b,c)<<endl; 
                break;
            }
            cout<<"=The triange is not possible!\n"; 
            break; 

            default:
            cout<<"\nExiting...\n";  
        }
        cout<<endl;
    }while(choice>=1&&choice<=4); 
    
    return 0;       
}




