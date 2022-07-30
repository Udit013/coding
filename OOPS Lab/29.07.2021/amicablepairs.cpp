#include<iostream>
using namespace std;
int sumDivisors(int n)
{
    int sum=0,i;
    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
          sum=sum+i;
        }         
    }   
    return sum;
}

int main()
{
    int n1,n2,sum=0;
    for (n1 = 1;  n1 <= 100000;  n1++) {
         n2 = sumDivisors(n1);
         if (n1 < n2 && sumDivisors(n2) == n1) {
             cout<<"\nAmicable pairs are: "<<n1<<" "<<n2;
         }
    }
    return 0;
}


