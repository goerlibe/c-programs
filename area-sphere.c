// Write C program to find area of sphere:

#include <conio.h>
#include <stdio.h>

int main()
{

    float area, radius, pi = 3.14;

    printf("Enter radius of sphere: ");
    scanf("%f", &radius);

    area = 4 * pi * radius * radius;

    printf("Area of sphere with radius %f is %f", radius, area);

    return 0;
}