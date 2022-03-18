/* Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers */
/* array might be easy but i dont't wanna try it :p */
#include <stdio.h>

int main()
{
    int num;
    int positiveCounter = 0, negativeCounter = 0;

    for(int i = 1; i <= 5; i++)
    {
        printf("Enter ");
        switch(i)
        {
            case 1:
                printf("first number: ");
                break;
            case 2:
                printf("second number: ");
                break;
            case 3:
                printf("third number: ");
                break;
            case 4:
                printf("fourth number: ");
                break;
            case 5:
                printf("fifth number: ");
                break;
        }

        scanf(" %d", &num);
        if(num < 0)
        {
            negativeCounter++;
        }
        else
        {
            positiveCounter++;
        }
    }

    printf("Number of positive: %d\n", positiveCounter);
    printf("Number of negative: %d\n", negativeCounter);
    return 0;
}
