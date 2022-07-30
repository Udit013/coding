/* 2.Create two classes which stores distance in feet, inches
  and meter, centimeter format respectively. Write a function
  which compares distance in object of these classes and
  displays the larger one.*/

#include <iostream>
using namespace std;
class Metric;
class Imperial
{
public:
    float feet = 0.0, inch = 0.0;

public:
    void input()
    {
        cout << " feet: ";
        cin >> feet;
        cout << "inches: ";
        cin >> inch;
        feet = feet + inch / 12;
    }
    friend void distcompare(Imperial d1, Metric d2);
};

class Metric
{
public:
    float meter = 0.0, cm = 0.0;

public:
    void input()
    {
        cout << " Meters: ";
        cin >> meter;
        cout << "Centimeters: ";
        cin >> cm;
        meter = meter + cm / 100;
    }
    friend void distcompare(Imperial d1, Metric d2);
};
void distcompare(Imperial d1, Metric d2)
{
    float cm1, cm2;
    cm1 = d1.feet * 30.48;
    cm2 = d2.meter * 100;

    if (cm1 > cm2)
    {
        cout << "\nFirst distance is greater";
    }
    else
    {
        cout << "\nSecond distance is greater";
    }
}
int main()
{
    Metric m2;
    Imperial i1;
    cout << "Distance 1:\n";
    i1.input();
    cout << "\nDistance 2:\n";
    m2.input();
    distcompare(i1, m2);
    return 0;
}