#include <iostream>
using namespace std;
int main(){

int *p;

p = new int(5);
int *q;
q = new int[2];
* q = *p;
cout<<*p+*q;
return 0;
}