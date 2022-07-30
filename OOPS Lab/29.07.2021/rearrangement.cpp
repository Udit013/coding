#include <iostream>
using namespace std;

void mix(string input, int left, int right)
{
    if (left == right)
        cout << input << endl;
    else
    {
        for (int i = left; i <= right; i++)
        {
            swap(input[left], input[i]);
            mix(input, left + 1, right);
            swap(input[left], input[i]);
        }
    }
}
int main()
{ 
    string str;
    cout << "Enter string: ";
    cin >> str;

    int size = str.size();
    mix(str, 0, size - 1);
    return 0;
}
