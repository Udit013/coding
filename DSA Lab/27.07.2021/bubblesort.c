#include <stdio.h>

int main()
{
  int array[100], n, a, d, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (a = 0; a < n; a++)
    scanf("%d", &array[a]);

  for (a = 0 ; a < n - 1; a++)
  {
    for (d = 0 ; d < n - a - 1; d++)
    {
      if (array[d] > array[d+1]) 
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (a = 0; a < n; a++)
     printf("%d\n", array[a]);

  return 0;
}