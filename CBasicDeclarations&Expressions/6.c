#include <stdio.h>

int main()
{
    printf("Number of days: ");
    int d;
    scanf(" %d", &d);

    int years = d / 365;
    int months =  (d - (365 * years)) / 7;
    int days = d -(365 * years + months * 7);
  ;

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", months);
    printf("Days: %d\n", days);
    return 0;
}

/******************************************************

    Write a C program to convert specified days into years, weeks and days.
    Go to the editor
    Note: Ignore leap year.

*******************************************************/
