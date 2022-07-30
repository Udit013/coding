/* How can we realize the use of default arguments through
 overloaded functions? Illustrate with an example program. */

#include <iostream>
using namespace std;

void add(int x = 4, float y=7.0){
    cout << "x+y= " <<(x+y)<< endl;
}
void add(float x, int y = 0, int z = 5){
    cout << "x+y+z= " <<(x+y+z)<< endl;
}
int main(){
    add();
    add(5,8.6f);
    add(13.0f);
    add(3.0f,4);
    add(5,8,9);
    return 0;
}