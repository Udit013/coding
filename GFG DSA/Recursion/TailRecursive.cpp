#include <iostream>
using namespace std;

void fun(int n,int k)
{
    if (n == 0)
        return;
    
    cout << k << " ";
    fun(n-1,k+1);
}

int main()
{
    int n = 8;
    fun(8,1);
}