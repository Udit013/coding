//1. WAP to add two distances (in km-meter) by passing structure to a function.

#include <stdio.h>
struct Distance {
   int km_556;
   int m_556;
};
int add(int d1km, int d1m, int d2km, int d2m){
    int kms_556,meters_556;
    kms_556 = d1km + d2km;
	meters_556 = d1m + d2m;
	kms_556 = kms_556 + (meters_556 / 1000);
	meters_556 = meters_556 % 1000;
    printf("%d kilometers %d meters",kms_556,meters_556);
    return 0;
}
int main() {
   struct Distance d1, d2, result;
   printf("Enter length of Distance 1:");
   printf("\nEnter km: ");
   scanf("%d", &d1.km_556);
   printf("Enter meters: ");
   scanf("%d", &d1.m_556);

   printf("\nEnter length of Distance 2:");
   printf("\nEnter km: ");
   scanf("%d", &d2.km_556);
   printf("Enter meters: ");
   scanf("%d", &d2.m_556);

   printf("\nAfter addition of distances: ");
   add(d1.km_556,d1.m_556,d2.km_556,d2.m_556);
   return 0;
}