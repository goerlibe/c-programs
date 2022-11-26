// C program to check if number is even or odd:

#include <stdio.h>

int main()
{
    int number;

    printf("Enter any number: ");

    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("Number is even!");
    }
    else
    {
        printf("Number is Odd!");
    }

    return 0;
}