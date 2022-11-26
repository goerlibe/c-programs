// C program to convert celsius into fehrenheit

#include <stdio.h>

int main()
{
    float celsius, fehrenheit;

    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);

    fehrenheit = (celsius * 1.8) + 32;

    printf("%f celsius into fehrenheit is: %f", celsius, fehrenheit);

    return 0;
}