#include <iostream>
using namespace std;
int main(){

    int sum;

    for(int n = 1;n <= 10000; n++){
        sum = 0;

        for (int i = 1; i <= n/2; i++){
            if (n % i == 0){
                sum += i;
            }
        }

        if (sum == n){
            cout <<n<< " is perfect\n";
        }
    }

    return 0;
}