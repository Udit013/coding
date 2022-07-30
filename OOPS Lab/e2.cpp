#include <iostream>
using namespace std;
int main(){
void test1();
void test2();
test1();
return 0;
}
void test1()
{
test2();
cout<<"\nOne";
}
void test2()
{
cout<<"\nTwo";
}