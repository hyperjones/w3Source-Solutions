#include <stdio.h>

int main()
{
    printf("Input total distance in km: ");
    int km;
    scanf(" %d", &km);
    printf("Input total fuel spent in liters: ");
    float liters;
    scanf(" %f",&liters);

    printf("Average comsumption (km/lt) %.3f", km / liters);
    return 0;
}

/********************************************************************************
    Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters,
    float number – 2 decimal point). Go to the editor
    Test Data :
    Input total distance in km: 350
    Input total fuel spent in liters: 5
    Expected Output:
    Average consumption (km/lt) 70.000
*********************************************************************************/
