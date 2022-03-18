/* Write a C program to compute the sum of consecutive odd numbers from a given pair of integers. Go to the editor
Test Data :
Input a pair of numbers (for example 10,2):
Input first number of the pair: 10
Input second number of the pair: 2
Expected Output:
List of odd numbers: 3
5
7
9
Sum=24*/
#include <stdio.h>

int main()
{
    printf("Input first number of the pair: ");
    int num1;
    scanf(" %d", &num1);
    printf("Input second number of the pair: ");
    int num2;
    scanf(" %d", &num2);

    int length, min, max;
    //The max will be the length of array.
    //the min willl be the initializer of loop
    if(num1 > num2)
    {
        max = num1;
        min = num2;
    }
    else
    {
        max = num2;
        min = num1;
    }

    int arr[max];

    int oddNumber = 0; //tracks odd numbers 
    int sum = 0;
    for(int i = min; i < max; i++)
    {
        if(i % 2 != 0)
        {
            //odd numbers will be the elements array
            arr[i] = i;
            //increment everytime we found odd number
            oddNumber++;
            //this will be the total sum of odd numbers
            sum += i;
        }
        else
        {
            // assign zero to avoid garbage values, otherwise sum would contain random shit values
            arr[i] = 0; 
        }
    }
    printf("List of odd numbers: %d\n", oddNumber);
    for(int i = min; i < max; i++)
    {
        //This doesn't print the element that contains zero!
        if(arr[i] != 0)
        {
            printf("%d\n", arr[i]);
        }
    }

    printf("Sum = %d\n", sum);
    return 0;
}
