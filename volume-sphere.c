// Write C program to find volume of sphere:

#include <stdio.h>

int main()
{

    float volume, radius, pi = 3.14;

    printf("Enter radius of sphere: ");
    scanf("%f", &radius);

    volume = 4 / 3 * pi * radius * radius * radius;

    printf("volume of sphere with radius %f is %f", radius, volume);

    return 0;
}