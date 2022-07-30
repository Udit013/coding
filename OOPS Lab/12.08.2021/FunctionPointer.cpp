/*What is the scenario where pointers to functions can be put to use. 
Illustrate with an example program. */

#include <iostream>  
using namespace std;

int add(int a , int b){  
    return a+b;  
} 

int main(){  
    int (*funcptr)(int,int);  // function pointer declaration  
    funcptr=add; // funcptr is pointing to the add function  
    int sum=funcptr(5,5);  
    cout << "value of sum is :" << sum << endl;  
    return 0;  
}  