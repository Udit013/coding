/*
4. Write a program in C to find the LCM ,HCF,GCD of two numbers using recursion 
 by using menu driven switch case and functions.
*/

#include <stdio.h>

int findLCM(int a_556, int b_556)
{
    static int multiple = 1;
    if (multiple % a_556 == 0 && multiple % b_556 == 0)
    {
        return multiple;
    }
    else
    {
        multiple++;
        findLCM(a_556, b_556);
        return multiple;
    }
}
int findHCF(int a_556, int b_556)
{
    if (b_556 != 0)
        return findHCF(a_556, a_556 % b_556);
    else
        return a_556;
}
int main()
{
    int a_556, b_556;
    printf("\nEnter two numbers: \n");
    scanf("%d%d", &a_556, &b_556);
    int choice_556, lcm_556, hcf_556;
    do
    {
        printf("\n1.LCM\n2.HCF\n3.Exit\nEnter choice:");
        scanf("%d", &choice_556);
        switch (choice_556)
        {
        case 1:
            lcm_556 = findLCM(a_556, b_556);
            printf("\nLCM of %d and %d is %d\n", a_556, b_556, lcm_556);
            break;
        case 2:
            hcf_556 = findHCF(a_556, b_556);
            printf("\nHCF of %d and %d is %d\n", a_556, b_556, hcf_556);
            break;
        default:
            printf("Exiting");
        }
    } while (choice_556 == 1 || choice_556 == 2);
    return 0;
}