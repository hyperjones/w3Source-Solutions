#include <stdio.h>

int main()
{
    printf("Enter height: ");
    int height;
    scanf("%d", &height);
    printf("Enter width: ");
    int width;
    scanf(" %d", &width);
    // adding a space before the format specifier ignores the whitespace before it reads the first character.


    int perimeter = (height * 2) + (width * 2); // or (height + width) * 2
    int area = height * width;

    printf("Perimeter of rectangle = %d inches.\n", perimeter);
    printf("Area of the rectangle = %d square inches.\n", area);
    return 0;
}

/**********************************************************************************************
    5. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches.
    and width of 5 inches. Go to the editor
    Expected Output:
    Perimeter of the rectangle = 24 inches
    Area of the rectangle = 35 square inches
***********************************************************************************************/
