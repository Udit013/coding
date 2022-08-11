// 1.Write a menu driven program as given below, to sort an array of n
// integers in ascending order by insertion sort algorithm and determine the time
// required (in terms of step or frequency count and cpu clock time) to sort the elements.
// Repeat the experiment for different values of n and different nature of data.
// Finally plot a graph of the time taken versus n for each type of data.

#include <iostream>
using namespace std;

int insertionSort(int arr[], int n)
{
    int key, count = 0, j;
    for (int i = 1; i < n; i++)
    {           
        count++;
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            count++;
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    return count;
}

void swap(int *m, int *n)
{
    int temp = *m;
    *m = *n;
    *n = temp;
}

int selectionSort(int arr[], int n)
{
    int count = 0, max;
    for (int i = 0; i <= n - 1; i++)
    {
        count++;
        max = i;
        for (int j = i + 1; j < n; j++)
        {
            count++;
            if (arr[j] > arr[max])
                max = j;
        }
        swap(&arr[max], &arr[i]);
    }
    return count;
}

void display()
{
    srand(time(0));
    int sl = 0;
    cout << "Sl. No \t  Value of n \t TC(Ascending data)    TC(Descending data)  TC(Random data) \n\n";
    for (int n = 5000; n <= 50000; n = n + 5000)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = rand() % 10;
        }
        int countRand = insertionSort(arr, n);
        int countAscend = insertionSort(arr, n);
        selectionSort(arr, n);
        int countDescend = insertionSort(arr, n);
        cout << ++sl << " \t\t " << n << " \t\t " << countAscend << " \t\t " << countDescend << " \t\t " << countRand << "\n";
    }
}

int main()
{
    int choice;
    int arr[10];
    int c1, c2;
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    cout << "\n0. Quit. \n";
    cout << "1. n Random numbers=> Array\n";
    cout << "2. Display the array. \n";
    cout << "3. Sort the array in Ascending order by using insertion sort. \n";
    cout << "4. Sort the array in descending order by using any sorting method. \n";
    cout << "5. Time complexity to sort ascending of random data. \n";
    cout << "6. Time complexity to sort ascending of data already sorted in ascending order. \n";
    cout << "7. Time complexity to sort ascending of data already sorted in descending order. \n";
    cout << "8. Time complexity to sort ascending data for all cases \n(Data Ascending, Data in descending & Random Data) in Tabular form of values n=5000 to 50000, step=5000\n";

    do
    {
        cout << "\nEnter a choice: (0-8)\n"
             << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Quiting..\n";
            break;
        case 1:
            cout << "Enter 10 numbers: \n";
            for (int i = 0; i < 10; i++)
            {
                cin >> arr[i];
            }
            break;

        case 2:
            cout << "The array: \n";
            for (int i = 0; i < 10; i++)
            {
                cout << arr[i] << " ";
            }
            break;

        case 3:
            c1 = insertionSort(arr, 10);
            break;
        case 4:
            c2 = selectionSort(arr, 10);
            break;

        case 5:
            cout << "Time complexity on random data" << c1;
            break;
        case 6:

            cout << "Time complexity on ascending data: " << insertionSort(arr1, 10);
            break;
        case 7:

            cout << "Time complexity on descending data: " << insertionSort(arr2, 10);
            break;
        case 8:
            display();
            break;
        }
    } while (choice != 0);
}