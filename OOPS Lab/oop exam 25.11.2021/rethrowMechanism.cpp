/*Q.3. Write a program to show the use of rethrow 
mechanism in exception handling.*/

#include <iostream>
#include <conio.h>

using namespace std;

void exceptionFunc()
{
    try
    {
        throw 0;
    }
    catch (int i_556)
    {
        cout << "\nException caught inside function : " << i_556;
        throw;
    }
}

int main()
{
    int a_556 = 0;
   
    try
    {
        exceptionFunc();
    }
    catch (int excep_556)
    {
        cout << "\nException caught inside Main : " << excep_556;
    }

    getch();
    return 0;
}