/*
Q2. Let A be nXn square dynamic matrix. WAP by using appropriate user defined functions for the following:
a. Find the number of nonzero elements in A
B. Find the sum of the elements above the leading diagonal.
C. Display the elements below the minor diagonal.
D. Find the product of the diagonal elements
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n_556,ch_556,i_556,j_556,**ptr_556,count_556,sum_556,p_major_556,p_minor_556;
    printf("\n Enter order of matrix : ");
    scanf("%d",&n_556);
    ptr_556=(int**)malloc(n_556*sizeof(int*));
    for(i_556=0;i_556<n_556;i_556++)
        ptr_556[i_556]=(int*)malloc(n_556*sizeof(int));
    printf("Enter elements: ");
    for(i_556=0;i_556<n_556;i_556++)
    {
        for(j_556=0;j_556<n_556;j_556++){
            scanf("%d",&ptr_556[i_556][j_556]);
        }
    }
    printf("\n\n Given Matrix is : \n");
    for(i_556=0;i_556<n_556;i_556++){
        for(j_556=0;j_556<n_556;j_556++)
           printf("%d\t",ptr_556[i_556][j_556]);
        printf("\n");
    }
    do{
        printf("\n 1.Number of nonzero elements");
        printf("\n 2.Sum of all elements above the leading diagonal");
        printf("\n 3.Display the elements below the minor diagonal");
        printf("\n 4.Find the product of the diagonal elements");
        printf("\n 5.Exit");
        printf("\n Enter operations :");
        scanf("%d",&ch_556);
        switch(ch_556){
	        case 1:
            count_556=0;
    	    for (i_556=0;i_556<n_556;i_556++)
	        {
                for(j_556=0;j_556<n_556;j_556++)
		        {
			        if(ptr_556[i_556][j_556]!=0)
			        count_556=count_556+1;
		        }
	        }
            printf("\n Number of Non-Zero elements = %d",count_556);
	        break;

            case 2:
            sum_556=0;
 	        for(i_556=0 ; i_556<n_556 ; i_556++){
                for(j_556=0 ; j_556<n_556 ; j_556++){
                    if(j_556>i_556){
                     sum_556 = sum_556 + ptr_556[i_556][j_556] ;
                    }
                }
            }
            printf("\nThe sum of elements above diagonal is %d\n",sum_556);
	        break;

            case 3:
            sum_556=0;
            printf("\nThe elements below minor diagonal are:\n");
 	        for(i_556=0 ; i_556<n_556 ; i_556++){
                for(j_556=0 ; j_556<n_556 ; j_556++){
                    if((i_556+j_556)>=n_556){
                        printf(" %d",ptr_556[i_556][j_556]) ;
                    }
                }
            }
	        break;

            case 4:
            p_major_556=1;
            p_minor_556=1;
            for(i_556 = 0; i_556 < n_556; ++i_556){
                for(j_556 = 0; j_556 < n_556; ++j_556){
                    if(i_556 == j_556)
                    p_major_556 = p_major_556 * ptr_556[i_556][j_556];
                }
            }
            for(i_556 = 0; i_556 < n_556; ++i_556){
                for(j_556 = 0; j_556 < n_556; ++j_556){
                    if((i_556 + j_556) == (n_556 - 1))
                    p_minor_556 = p_minor_556 * ptr_556[i_556][j_556];
                }
            }
            printf("\nThe product of the Major Diagonal elements is: %d",p_major_556);
            printf("\nThe product of the Minor Diagonal elements is: %d",p_minor_556);
            break;

            default: 
            printf("\nExiting...");
        }
        printf("\n");
    }while(ch_556>=1&&ch_556<4);    
    return 0;
}
