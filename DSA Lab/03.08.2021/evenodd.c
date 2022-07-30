/*
5.WAP to arrange the elements of a dynamic array such that
 even nums are follwed by Odd Num
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a_556, *b_556, i_556, n_556, j_556, k_556, temp_556, c_556 = 0;
    printf("Enter size of the  array : ");
    scanf("%d", &n_556);
    a_556 = (int *)calloc(n_556, sizeof(int));
    b_556 = (int *)calloc(n_556, sizeof(int));
    printf("Enter elements in array : ");
    for (i_556 = 0; i_556 < n_556; i_556++)
    {
        scanf("%d", &*(a_556 + i_556));
        if (*(a_556 + i_556) % 2 == 1)
            c_556++;
    }
    for (i_556 = 0; i_556 < n_556 - 1; i_556++)
    {
        for (j_556 = 0; j_556 < n_556 - i_556 - 1; j_556++)
        {
            if (*(a_556 + j_556) > *(a_556 + j_556 + 1))
            {
                temp_556 = *(a_556 + j_556);
                *(a_556 + j_556) = *(a_556 + j_556 + 1);
                *(a_556 + j_556 + 1) = temp_556;
            }
        }
    }
    k_556 = 0;
    j_556 = n_556 - c_556;
    for (i_556 = 0; i_556 < n_556; i_556++)
    {
        if (*(a_556 + i_556) % 2 == 0)
        {
            if (k_556 < n_556 - c_556)
                b_556[k_556++] = *(a_556 + i_556);
        }
        else
        {
            if (j_556 < n_556)
                b_556[j_556++] = *(a_556 + i_556);
        }
    }
    printf("\narray after sorting even and odd elements separately:\n ");
    for (i_556 = 0; i_556 < n_556; i_556++)
    {
        *(a_556 + i_556) = *(b_556 + i_556);
        printf("%d ", *(a_556 + i_556));
    }
    return 0;
}