#include <stdio.h>

int main()
{
    printf("Weight - Item1: ");
    int wItem1;
    scanf(" %d", &wItem1);
    printf("No. of item1: ");
    int item1;
    scanf(" %d", &item1);

    printf("Weight - Item2: ");
    int wItem2;
    scanf(" %d", &wItem2);
    printf("No. of item2: ");
    int item2;
    scanf(" %d", &item2);

    double average = (double)(wItem1 * item1 + wItem2 * item2) / (item1 + item2);

    printf("Average value = %f\n", average);
    return 0;
}

/************************************************************************************************
    Write a C program that accepts two item’s weight (floating points' values )
    and number of purchase (floating points' values) and calculate the average value of the items.
    Go to the editor
*************************************************************************************************/
