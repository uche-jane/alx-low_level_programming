#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year)
{
    int days;

    days = day_of_year(month, day, year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        if (month > 2) {
            days++;
        }
    }

    int remaining_days = 365 + is_leap(year) - days;

    printf("Day of the year: %d\n", days);
    printf("Remaining days: %d\n", remaining_days);
}

int is_leap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int day_of_year(int month, int day, int year)
{
    int i;
    int days;

    days = 0;
    for (i = 1; i < month; i++) {
        days += get_days_in_month(i, year);
    }
    days += day;

    return (days);
}

int get_days_in_month(int month, int year)
{
    int days;

    switch (month) {
        case 2:
            days = 28 + is_leap(year);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
    }

    return days;
}

