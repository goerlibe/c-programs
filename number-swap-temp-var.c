// C program to swap 2 numbers with third(temp) variable:

#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);
    printf("Value before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("Value after swapping: a = %d, b = %d", a, b);

    return 0;
}