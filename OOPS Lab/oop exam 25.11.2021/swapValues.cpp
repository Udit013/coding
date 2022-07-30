/* Q.2. Write  program to create a function template that
 swaps two values entered by the user.*/

 #include <iostream>
using namespace std;
 
template <typename S>
void swapFunc(S &val1, S &val2)
{
  S temp_556;
  temp_556 = val1;
  val1 = val2;
  val2 = temp_556;
}
 
int main()
{
    int num1_556;
    int num2_556;
    cout<<"Enter two values:";
    cin>>num1_556>>num2_556;

    cout << "Before swap: " << "\n";
    cout <<"First number:"<<num1_556 <<" Second number:"<< num2_556 << "\n";
    swapFunc(num1_556, num2_556);
    cout << "After swap: " << "\n";
    cout <<"First number:"<<num1_556 <<" Second number:"<< num2_556 << "\n";

  return 0;
}