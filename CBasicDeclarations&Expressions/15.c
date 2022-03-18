/* Write a C program that accepts some integers from the user and find the highest value and the input position. Go to the editor
Test Data :
Input 5 integers:
5
7
15
23
45
Expected Output:
Highest value: 45
Position: 5*/
#include <stdio.h>

int main()
{
    printf("Input 5 integers: ");
    int num;
    int max = 0;
    int position;

    for(int i = 1; i <= 5; i++)
    {
        scanf(" %d", &num);

        if(num > max)
        {
            max = num;
            position = i;
        }
    }

    printf("highest value: %d\n", max);
    printf("Position: %d\n", position);
    return 0;
}
