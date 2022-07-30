/*
Q3. WAP to swap all the elements in the 1st column with all the corresponding 
elements in the last column, and 2nd column with the second last columns 
and 3rd with 3rd last, etc. of a 2-D dynamic array. Display the matrix.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int **s_556,temp, row_556, column_556, i_556, j_556;
    printf("Enter Row & Column:\n") ;
    scanf("%d%d", &row_556, &column_556) ;
    s_556 = (int **) malloc(row_556*sizeof(int *)) ;
    printf("Enter the elements:");
    for(i_556=0; i_556<row_556; ++i_556) {
        s_556[i_556] = (int *) malloc(column_556*sizeof(int)) ;
        for(j_556=0; j_556<column_556; ++j_556)
            scanf("%d",&s_556[i_556][j_556]);
    }
    printf("Matrix Elements:\n"); 
    for(i_556=0; i_556<row_556; ++i_556) {
        for(j_556=0; j_556<column_556; ++j_556)
            printf("%d\t", s_556[i_556][j_556]);
        printf("\n") ;
    }
    printf("\nMatrix after swapping columns:\n");
    for(i_556=0;i_556<row_556;i_556++)
    {
        printf("\n");
        for(j_556=column_556-1;j_556>=0;j_556--)
        {
            printf("%d\t",s_556[i_556][j_556]);
        }
    }
    return 0;
}

