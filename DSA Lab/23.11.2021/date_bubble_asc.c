/* WAP to sort an array of n dates in an ascending order using 
Bubble sort. Date structure is {day, month, year } */

#include <stdio.h>
#include <stdlib.h>
struct date
{
    int day;
    int month;
    int year;
};
struct date *laterdt(struct date *dt1, struct date *dt2)
{
    if (dt1->year != dt2->year)
    {
        if (dt1->year > dt2->year)
            return (dt1);
        else
            return (dt2);
    }
    else
    {
        if (dt1->month != dt2->month)
        {
            if (dt1->month > dt2->month)
                return (dt1);
            else
                return (dt2);
        }
        else
        {
            if (dt1->day > dt2->day)
                return (dt1);
            else
                return (dt2);
        }
    }
}
void swap(struct date *dt1, struct date *dt2)
{
    if (dt1 == dt2)
        return;
    struct date dt;
    dt.day = dt1->day;
    dt.month = dt1->month;
    dt.year = dt1->year;
    dt1->day = dt2->day;
    dt1->month = dt2->month;
    dt1->year = dt2->year;
    dt2->day = dt.day;
    dt2->month = dt.month;
    dt2->year = dt.year;
}
void datesort(struct date *dt, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            swap(laterdt(&dt[j], &dt[j + 1]), &dt[j + 1]);
        }
    }
}
int main()
{

    int dates;
    printf("Enter the no. of dates: ");
    scanf("%d", &dates);
    struct date *dtarr = malloc(dates * sizeof(struct date));
    for (int i = 0; i < dates; i++)
    {
        printf("Enter the day, month, and year: ");
        scanf("%d", &dtarr[i].day);
        scanf("%d", &dtarr[i].month);
        scanf("%d", &dtarr[i].year);
    }
    datesort(dtarr, dates);
    printf("Sorted dates: \n");
    for (int i = 0; i < dates; i++)
    {
        printf("%d / %d / %d\n", dtarr[i].day, dtarr[i].month, dtarr[i].year);
    }
}

