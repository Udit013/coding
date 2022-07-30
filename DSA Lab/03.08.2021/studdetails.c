/*
3.WAP in'C' to read & print the details of N=5 Num of CS Students details
 using DMA (Roll,AGE,CGPA,Sub)
*/

#include <stdio.h>
#include <stdlib.h>

struct csinto
{
    int roll_556;
    int age_556;
    double cgpa_556;
    char sub_556[30];
};
int main()
{
    struct csinto *ptr_556;
    int no_of_students_556;
    printf("Enter the number of students:");
    scanf("%d", &no_of_students_556);
    printf("\n");
    ptr_556 = (struct csinto *)malloc(no_of_students_556 * sizeof(struct csinto));
    for (int i = 0; i < no_of_students_556; i++)
    {
        printf("\nStudent CS %3d", i + 1);
        printf("\nEnter roll: ");
        scanf("%d", &(ptr_556 + i)->roll_556);
        printf("Enter age: ");
        scanf("%d", &(ptr_556 + i)->age_556);
        printf("Enter cgpa: ");
        scanf("%lf", &(ptr_556 + i)->cgpa_556);
        printf("Enter the subject: ");
        scanf(" %s", &(ptr_556 + i)->sub_556);
    }
    printf("\n\nDisplaying Info:\n\n");
    for (int i = 0; i < no_of_students_556; ++i)
    {
        printf("Student CS\n\n");
        printf("Roll no. : ");
        printf("%d\n", (ptr_556 + i)->roll_556);
        printf("Age : ");
        printf("%d\n", (ptr_556 + i)->age_556);
        printf("CGPA : ");
        printf("%lf\n", (ptr_556 + i)->cgpa_556);
        printf("Subject : ");
        printf("%s\n", (ptr_556 + i)->sub_556);
    }
    return 0;
}