/* Write a function myAvg( ) that takes unspecified number of input arguments and finds the
average of all input numbers and returns the same. Your function should have at least one
argument which shall decide the number of input numbers for whom average is to be calculated.
Once defined the function can be called as below,
avg = myAvg (3, 10, 20, 30);
avg = myAvg (5, 10, 20, 30, 40, 50);
// avg = (10+20+30)3
// avg = (10+20+30+40+50)/5 */

#include <iostream>
#include <cstdarg>
using namespace std;
    double average(int num,...) {
   va_list valist;
   double sum = 0.0;
   int i;
   va_start(valist, num); //initialize valist for num number of arguments
   for (i = 0; i < num; i++) { //access all the arguments assigned to valist
      sum += va_arg(valist, int);
   }
   va_end(valist); //clean memory reserved for valist
   return sum/num;
}
int main() {
   cout << "Average of 2, 3, 4, 5 = "<< average(4, 2,3,4,5) << endl;
   cout << "Average of 5, 10, 15 = "<< average(3, 5,10,15)<< endl;
   cout << "Average of  5,10,1,1,2,3,4,5,6,5 = "<< average(6, 1,2,3,4,5,6,7,8,9,10)<< endl;
}