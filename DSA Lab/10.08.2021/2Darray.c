/*
Q1. Write a program using C to allocate memory dynamically for 2D array ,
read the values and display them using 3 functions separately
I. Keeping no columns fixed and using variable no of rows
II. Keeping no rows fixed and using variable no of columns
III. Using both variable no of rows and columns(use double pointer)
*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void nrowsxfour(){
    int (*q_556)[4],rows_556,i_556,j_556;
    printf("Enter the number of Rows: ") ;
    scanf("%d", &rows_556);
    q_556 = (int (*)[4]) malloc (rows_556*4*sizeof(int));
    printf("Enter the elements:");
    for(i_556=0; i_556<rows_556; i_556++)
        for(j_556=0; j_556<4; j_556++)
            scanf("%d",&q_556[i_556][j_556]);
    for(i_556=0; i_556<rows_556; i_556++) {
        for(j_556=0; j_556<4; j_556++)
            printf("%d ", q_556[i_556][j_556]);
        printf("\n");
    }
}
void threexmcolumns(){
    int *r_556[3],col_556,i_556,j_556;
    printf("Enter the number of columns: ") ;
    scanf("%d", &col_556);
    printf("Enter the elements:");
    for (i_556=0;i_556<3;i_556++){
        r_556[i_556] = (int *) malloc (col_556*sizeof(int));
        for(j_556=0; j_556<col_556; ++j_556)
            scanf("%d",&r_556[i_556][j_556]);
    }
    for(i_556=0;i_556<3;i_556++){
        for(j_556=0;j_556<col_556;j_556++)
            printf("%d ",r_556[i_556][j_556]);
        printf("\n");
    }
}
void rowsxcolumns(){
    int **s_556, row_556, column_556, i_556, j_556;
    printf("Enter Row & Column:\n") ;
    scanf("%d%d", &row_556, &column_556) ;
    s_556 = (int **) malloc(row_556*sizeof(int *)) ;
    printf("Enter the elements:");
    for(i_556=0; i_556<row_556; ++i_556) {
        s_556[i_556] = (int *) malloc(column_556*sizeof(int)) ;
        for(j_556=0; j_556<column_556; ++j_556)
            scanf("%d",&s_556[i_556][j_556]);
    }
    for(i_556=0; i_556<row_556; ++i_556) {
        for(j_556=0; j_556<column_556; ++j_556)
            printf("%d ", s_556[i_556][j_556]);
        printf("\n") ;
    }
}
int main()
{
    printf("Keeping no columns fixed(4) and using variable no of rows\n");
    nrowsxfour();
    printf("\nKeeping no rows fixed(3) and using variable no of columns\n");
    threexmcolumns();
    printf("\nUsing both variable no of rows and columns\n") ;         
    rowsxcolumns();
    return 0;
}