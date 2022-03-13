#include <stdio.h>

int main()
{
    printf("Input Employees ID(Max. 10 chars): ");
    char ID[10];
    scanf("%s", &ID);

    printf("Input the working hrs: ");
    int wHours;
    scanf(" %d", &wHours);

    printf("Salary amount/hr: ");
    int salary;
    scanf(" %d", &salary);

    printf("Employees ID = %s\n", ID);
    printf("Salary = U$ %.2f\n", (double)salary * wHours);
    return 0;
}

/******************************************************************************************************************
    Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour.
    Print the employee's ID and salary (with two decimal places) of a particular month. Go to the editor
    Test Data :
    Input the Employees ID(Max. 10 chars): 0342
    Input the working hrs: 8
    Salary amount/hr: 15000
    Expected Output:
    Employees ID = 0342
    Salary = U$ 120000.00
*******************************************************************************************************************/
