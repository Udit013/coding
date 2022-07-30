//2.WAP to Find the largest element in an Array using Dynamic Memory Allocator.

#include <stdio.h>
#include <stdlib.h>
int main()
{
      int i_556, n_556,*p_556;
      printf("Enter the number of elements you want to add : ");
      scanf("%d", &n_556);
      p_556 = (int*) calloc(n_556, sizeof(int));
      if(p_556 == NULL)
      {
            printf(" Memory is Not Allocated.");  
            exit(0);
      }
      printf("\n");
      for(i_556 = 0; i_556 < n_556; ++i_556)
      {
            printf("Enter Number %d: ", i_556 + 1);
            scanf("%d", p_556 + i_556);
      }
      for(i_556 = 1; i_556 < n_556; ++i_556)
      {
            if(*p_556 < *(p_556 + i_556))
                  *p_556 = *(p_556 + i_556);
      }
      printf("\nLargest Element = %d", *p_556);
      return 0;
}