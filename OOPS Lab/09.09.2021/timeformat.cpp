/*2.Create a class which stores time in hh:mm:ss format. Include
 all the constructors. The parameterized constructor should
 initialize the minute value to zero, if it is not provided.*/

#include <iostream>
using namespace std;
class time
{
    int hour, min, sec;

public:
    time()
    {
        cout << "Hours: ";
        cin >> hour;
        cout << "Minutes: ";
        cin >> min;
        cout << "Seconds: ";
        cin >> sec;
    }
    time(int h, int s, int m = 0)
    {
        hour = h;
        min = m;
        sec = s;
    }
    time(const time &x, const time &y, const time &z)
    {
        hour = x.hour;
        min = y.min;
        sec = z.sec;
    }
    void display()
    {
        min = min + (sec / 60);
        sec = sec % 60;
        hour = hour + (min / 60);
        min = min % 60;
        cout << hour << ":" << min << ":" << sec << endl;
    }
};
int main()
{
    int hour2, sec2;
    cout << "Hours: ";
    cin >> hour2;
    cout << "Seconds: ";
    cin >> sec2;
    time t2(hour2, sec2);
    t2.display();
    time t4(t2);
    t4.display();
    time t1;
    t1.display();
    time t3(t1);
    t3.display();

    return 0;
}