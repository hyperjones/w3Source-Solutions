#include <stdio.h>

int main()
{
    printf("Enter 3 characters( a b c ): ");
    char a, b, c;
    scanf(" %c %c %c", &a, &b, &c);

    printf("The reverse of %c%c%c: %c%c%c\n", a, b, c, c, b, a );

    //Using array
    //Shitway
    char ch[3];
    ch[0] = a;
    ch[1] = b;
    ch[2] = c;
    printf("\n");
    printf("The reverse of %c%c%c: ", a, b, c);
    for(int i = 3 - 1; i >= 0; i--)
    {
        printf("%c", ch[i]);
    }

    return 0;
}

/*************************************************************************************

    Write a C program to print the following characters in a reverse way. Go to the editor
    Test Characters: 'X', 'M', 'L'
    Expected Output:
    The reverse of XML is LMX

**************************************************************************************/
