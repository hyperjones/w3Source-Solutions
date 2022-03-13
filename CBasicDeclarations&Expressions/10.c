#include <stdio.h>
#include <stdlib.h>//abs()

int main()
{
    printf("Input the first integer: ");
    int a;
    scanf(" %d", &a);
    printf("Input the second integer: ");
    int b;
    scanf(" %d", &b);
    printf("Input the third integer: ");
    int c;
    scanf(" %d", &c);

    int max, min;

    if(a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }

    if(c > max && c > min)
    {
        max = c;
    }
    //find the maximum value without if statement
    int result = (a + b + abs( a - b)) / 2;             // evaluates == to maximum value
    //Now result contains the maximum value
    int maximum = (c + result + abs(c - result)) / 2;   //result is used in this expression. It's now c and the maximum
    //done. maximum is now the largest between the 2 integers
    printf("Maximum value of three integers: %d\n", max);
    printf("Without if statement. Maximum: %d\n", maximum);

    return 0;
}

/********************************************************************************

    Write a C program that accepts three integers and find the maximum of three.
    Go to the editor
    Test Data :
    Input the first integer: 25
    Input the second integer: 35
    Input the third integer: 15
    Expected Output:
    Maximum value of three integers: 35

***********************************************************************************/
