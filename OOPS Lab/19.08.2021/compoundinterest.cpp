/*
WAP to create a functions to calculate simple interest and compound interest 
by using function overloading concept. 
(Take the rate of interest as default argument).
*/
#include <iostream>
#include <cmath>
using namespace std;

class Interest{
    public:
    float interest(float time, float principle, float rate = 7.4/100){
        return principle + (principle*time*rate);
    }
    float interest(float time, float principle, int n, float rate = 6.7/100){
        return principle*pow((1+(rate/n)), n*time);
    }
};
int main(){
    int choice;
    Interest obj;
	do{
		cout << "\n1.Simple Interest\n2.Compound Interest\n3.Exit" << endl;
		cin >> choice;
		if(choice == 1){
        	float time, principle, rate;
        	cout << "Enter principle, time, rate: " << endl;
        	cin >> principle >> time >> rate;
        	float si = obj.interest(time, principle, rate/100);
        	cout << "Amount after interest = " << si << endl;
   		} 
		else if( choice == 2){
        	float time, principle, rate;
        	int n;
        	cout << "Enter principle, time, rate, n: " << endl;
        	cin >> principle >> time >> rate >> n;
        	float ci = obj.interest(time, principle, n, rate/100);
        	cout << "Amount after interest = " << ci << endl;
   		} 
		else{
        	cout << "Exiting" << endl;
    	}
		cout<<endl;
	}while(choice>=1&&choice<=2);
	return 0;
}
