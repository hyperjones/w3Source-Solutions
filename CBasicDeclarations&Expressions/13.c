/* Write a C program that prints all even numbers between 1 and 50 (inclusive) */
#include <stdio.h>

int main()
{
    for(int i = 1; i <= 50; i++)
    {
        (i % 2) ? : printf("%d ", i);
    }
}

