#include <stdio.h>

int main()
{
    printf("Input the first integer: ");
    int a;
    scanf(" %d", &a);
    printf("Input the first integer: ");
    int b;
    scanf(" %d", &b);

    printf("\nSum of the above two integer = %d\n", a + b);
    printf("Product of the above two integer = %d\n", a * b);
    printf("Quotient of the above two integer = %d\n", a / b);
    printf("Difference of the above two integer = %d\n", a - b);
    return 0;
}
