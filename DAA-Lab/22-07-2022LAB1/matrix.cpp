// 5.Let A be n*n square matrix array. WAP by using appropriate user defined functions for
// the following:
// a) Find the number of nonzero elements in A
// b) Find the sum of the elements above the leading diagonal.
// c) Display the elements below the minor diagonal.
// d) Find the product of the diagonal elements.

#include <iostream>
using namespace std;
const int m = 3, n = 3;

void nonZero(int arr[m][n])
{
    int c = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j])
            {
                c++;
            }
        }
    }
    cout << "Number of non zero elements: " << c << endl;
}

void sumLead(int arr[m][n])
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i)
            {
                sum = arr[i][j] + sum;
            }
        }
    }
    cout << "Sum: " << sum << endl;
}

void lowerDiagonal(int arr[m][n])
{
    cout << "Lower diagonal elements: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j >= n)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
}

void prodDiag(int arr[m][n])
{
    int prod = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                prod *= arr[i][j];
            }
        }
    }
    cout << "Product of digaonal elements: " << prod << endl;
}

int main()
{

    int arr[m][n];
    cout << "Enter array elements (3x3): \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    nonZero(arr);
    sumLead(arr);
    lowerDiagonal(arr);
    prodDiag(arr);

    return 0;
}