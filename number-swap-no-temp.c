// C program to swap 2 numbers without third(temp) variable

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;

    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);
    printf("Value before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Value after swapping: a = %d, b = %d", a, b);

    return 0;
}