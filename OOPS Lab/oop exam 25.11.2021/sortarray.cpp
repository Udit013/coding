/* Q1.  Write a program to create a template that sorts the
 array of values entered by the user.*/

 #include <iostream>
using namespace std;

template <class Array>

void sort(Array arr_556[], int length_556)
{
    for (int i = 0; i < length_556; i++)
    {
        for (int j = i + 1; j < length_556; j++)
        {
            if (arr_556[i] > arr_556[j])
            {
                Array temp_556;
                temp_556 = arr_556[i];
                arr_556[i] = arr_556[j];
                arr_556[j] = temp_556;
            }
        }
    }
}

int main()
{
    int n_556;
    cout << "Enter the length of interger array: " << endl;
    cin >> n_556;
    
    int int_array[n_556];
    
    cout << "Enter integer array elements: " << endl;
    for (int i = 0; i < n_556; i++)
    {
        cin >> int_array[i];
    }
    
    sort(int_array, n_556);
   
    cout << "Sorted integer array:" << endl;
    for (int i = 0; i < n_556; i++)
    {
        cout << int_array[i] << ", ";
    }
    cout << endl;
    
    return 0;
}