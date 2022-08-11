/*3) Write a program by using an user defined function for computing ⌊ √n⌋ for any positive integer n.
 Besides assignment and comparison, your algorithm may only use the four basic arithmetical operations.
*/

#include <iostream>
using namespace std;

int root(int n)
{
    int ans = 1;
    int i;
    for (i = 1; i < n; i++)
    {

        ans = i * i;
        if (ans > n)
            break;
    }
    return i - 1;
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Floor of square root of " << n << " is " << root(n);
    return 0;
}