//6.WAP to reverse the contents of dynamic array of 'N' Elements

#include<stdio.h>
#include<stdlib.h>
int main()
{
      int *ptr_556,n_556,i_556;
      printf("Enter the number of elements you want to enter: ");
      scanf("%d",&n_556);
      ptr_556 = (int*) calloc(n_556, sizeof(int));
      printf("\nEnter %d Numbers:\n",n_556);
      for(i_556=0;i_556<n_556;i_556++)
      {
            scanf("%d",ptr_556+i_556);
      }
      printf("reverse order: \n");
      for(i_556=n_556-1;i_556>=0;i_556--)
      {
            printf(" %d",*(ptr_556+i_556));
      }
      return 0;
}