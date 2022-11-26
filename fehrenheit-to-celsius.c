// C program to convert Fehrenheit into Celsius

#include <stdio.h>

int main()
{
    float celsius, fehrenheit;

    printf("Enter temperature in fehrenheit: ");
    scanf("%f", &fehrenheit);

    celsius = (fehrenheit - 32) * 5 / 9;

    printf("%f fehrenheit into celsius is: %f", fehrenheit, celsius);

    return 0;
}