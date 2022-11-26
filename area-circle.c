// C program to find area of circle:

#include <stdio.h>

int main()
{
    float radius, pi = 3.14, area;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("Area of the circle is: %f", area);

    return 0;
}