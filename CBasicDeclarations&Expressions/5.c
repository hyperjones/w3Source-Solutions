#include <stdio.h>
#include <math.h> // M_PI
int main()
{
    printf("Enter radius: ");
    float radius;
    scanf(" %f", &radius);

    float perimeter = 2 * radius * M_PI;
    float area = M_PI * (radius * radius);

    printf("Perimeter: %.5f\n", perimeter);
    printf("Area: %.5f\n", area);
    return 0;
}

/******************************************************************************
    Write a C program to compute the perimeter and area of a circle with a given radius.

    C programming: Area and circumference of a circle

    In geometry, the area enclosed by a circle of radius r is πr2. Here the Greek letter π represents a constant,
    approximately equal to 3.14159, which is equal to the ratio of the circumference of any circle to its diameter.

    The circumference of a circle is the linear distance around its edge.
*******************************************************************************/
