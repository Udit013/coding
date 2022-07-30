//4.WAP to Find the standard deviation of 20 Nums
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>		 
int main()
{
	int* ptr_556;
    int i_556,num_556;
    float sum_556,sum1_556;
	float standarddeviation_556;
	sum_556=0;
	sum1_556=0;
	ptr_556 = (int*)malloc(20 * sizeof(int));
	printf("Enter the elements:");
	for (i_556 = 0; i_556 < 20; ++i_556) {
		scanf("%d",&num_556);
		ptr_556[i_556] = num_556;
	}
	for (i_556 = 0; i_556 < 20;i_556++) {
		sum_556 = sum_556 + ptr_556[i_556];
	}
	float mean = sum_556 /20;
	for (i_556 = 0; i_556 < 20; ++i_556) {
	   sum1_556 = sum1_556 + (ptr_556[i_556]-mean)*(ptr_556[i_556]-mean);
	}
	standarddeviation_556 = sqrt(sum1_556/20 );
	printf("\nStandard deviation is: %.4f",standarddeviation_556);
}