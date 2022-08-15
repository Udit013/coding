// 2. Write a C program to assign values to each members of
// the following structure. Pass the populated structure to a
// function call-by-address
// and print the value of each member of the structure.

// #include <stdio.h>
// struct details
// {
//     int roll_no;
//     char name[50];
//     float CGPA;
// };
// struct details input()
// {
//     struct details obj;
//     printf("Enter roll number: ");
//     scanf(" %d", &obj.roll_no);
//     printf("Enter name: ");
//     scanf(" %[^\n]%*c", obj.name);
//     printf("Enter CGPA: ");
//     scanf(" %f", &obj.CGPA);
//     return obj;
// }
// void output(struct details *a)
// {
//     printf("\nRoll number: %d\n", a->roll_no);
//     printf("Name: %s\n", a->name);
//     printf("CGPA: %.3f\n", a->CGPA);
// }
// int main()
// {
//     int n;
//     printf("Enter number of students: ");
//     scanf("%d", &n);
//     struct details obj[n];

//     for (int i = 0; i < n; i++)
//     {
//         printf("\nEnter details of student no. %d,\n ", i + 1);
//         obj[i] = input();
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("\n\nDetails of student no. %d: ", i + 1);
//         output(&obj[i]);
//     }
// }

#include <stdio.h>

struct info
{
    int roll_no;
    char name[50];
    float CGPA;
};

void printValue(struct info *p1, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nroll_no: ");
        printf("%d", p1->roll_no);
        printf("\nname: ");
        printf("%s", p1->name);
        printf("\ncgpa: ");
        printf("%f", p1->CGPA);
    }
}

void main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct info s1;
    for (int i = 0; i < n; i++)
    {
        printf("Enter roll_no: ");
        scanf("%d", &s1.roll_no);
        printf("Enter name: ");
        scanf("%s", &s1.name);
        printf("Enter cgpa: ");
        scanf("%f", &s1.CGPA);
    }
    printValue(&s1, n);
}