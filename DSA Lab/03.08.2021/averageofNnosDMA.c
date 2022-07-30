/*
1.WAP in 'C' to Dynamically allocate memory using malloc() or calloc()
 to store N numbers entered by the user and display all the numbers
 and the average
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n_556, i_556, *p_556, sum_556 = 0;
  printf("Enter number of elements: ");
  scanf("%d", &n_556);
  p_556 = (int *)calloc(n_556, sizeof(int));
  if (p_556 == NULL)
  {
    printf("memory cannot be allocated\n");
  }
  else
  {
    printf("Enter elements of array:\n");
    for (i_556 = 0; i_556 < n_556; ++i_556)
    {
      scanf("%d", &*(p_556 + i_556));
    }
    printf("Elements of array are\n");
    for (i_556 = 0; i_556 < n_556; i_556++)
    {
      printf("%d\n", *(p_556 + i_556));
      sum_556 += *(p_556 + i_556);
    }
    printf("the average is %d", (sum_556 / n_556));
  }

  return 0;
}