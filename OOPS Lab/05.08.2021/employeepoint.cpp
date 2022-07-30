#include <iostream>
using namespace std;

struct employee
{
    char name[50], id[20];
    int age;
    float bpay, gpay, hra, da;
} e[20];

int main()
{
    float max = 0;
    int n, i;
    cout << "Enter the number of employees = ";
    cin >> n;
    cout << "Enter the employee details\n";
    for (i = 0; i < n; i++)
    {
        cout << "\n\nEmployee " << i + 1;
        cout << "\nName = ";
        cin >> e[i].name;
        cout << "Id = ";
        cin >> e[i].id;
        cout << "Age = ";
        cin >> e[i].age;
        cout << "Basic Pay = ";
        cin >> e[i].bpay;
        e[i].hra = 0.10 * e[i].bpay;
        e[i].da = 0.80 * e[i].bpay;
        e[i].gpay = e[i].bpay + e[i].hra + e[i].da;
    }
    for (i = 0; i < n; i++)
    {
        cout << "\n\nEmployee" << i + 1;
        cout << "\nName =" << e[i].name;
        cout << "\nId =" << e[i].id;
        cout << "\nAge =" << e[i].age;
        cout << "\nBasic Pay =" << e[i].bpay;
        cout << "\nDA =" << e[i].da;
        cout << "\nHRA =" << e[i].hra;
        cout << "\nGross Pay = " << e[i].gpay;
    }
    return 0;
}