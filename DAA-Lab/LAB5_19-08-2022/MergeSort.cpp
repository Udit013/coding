/* 1. Write a program to implement Merge Sort and compare the complexities
 for best, worst and average cases. Also, plot a graph for the same. */

#include <iostream>
using namespace std;

void merge(int arr[], int p, int q, int r, int &count)
{

  int n1 = q - p + 1;
  int n2 = r - q;
  int L[n1], M[n2];
  for (int i = 0; i < n1; i++)
  {
    count++;
    L[i] = arr[p + i];
  }
  for (int j = 0; j < n2; j++)
  {
    count++;
    M[j] = arr[q + 1 + j];
  }
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  while (i < n1 && j < n2)
  {
    count++;
    if (L[i] <= M[j])
    {
      arr[k] = L[i];
      i++;
    }
    else
    {
      arr[k] = M[j];
      j++;
    }
    k++;
  }
  while (i < n1)
  {
    count++;
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2)
  {
    count++;
    arr[k] = M[j];
    j++;
    k++;
  }
}

int mergeSort(int arr[], int l, int r)
{
  int count = 0;
  if (l < r)
  {
    count++;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r, count);
  }
  return count;
}

void printArray()
{
  srand(time(0));
  int sl = 0;
  cout << "Sl. No \t  Value of n \t TC(Best case)    TC(Worst Case)    TC(Avg Case)  \n\n";
  for (int n = 500; n <= 5000; n = n + 500)
  {
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
      arr1[i] = i + 1;
    }
    int bestCase = mergeSort(arr1, 0, n - 1);
    int arr2[n];
    for (int i = n; i >= 1; i--)
    {
      arr2[i] = i;
    }
    int worstCase = mergeSort(arr2, 0, n - 1);
    int arr3[n];
    for (int i = n; i >= 1; i--)
    {
      arr3[i] = rand() % 10;
    }
    int avgcase = mergeSort(arr3, 0, n - 1);

    cout << ++sl << " \t " << n << "\t\t" << bestCase << "\t\t" << worstCase << "\t\t\t" << avgcase << "\n";
  }
}

int main()
{
  printArray();
  return 0;
}