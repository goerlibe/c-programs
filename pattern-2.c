/* C program to print following pattern:
 1
 1  2
 1  2  3
 1  2  3  4
 1  2  3  4  5
 1  2  3  4  5  6
 1  2  3  4  5  6  7
 1  2  3  4  5  6  7  8
 1  2  3  4  5  6  7  8  9
 1  2  3  4  5  6  7  8  9  10
 */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, k;

    printf("Enter number of lines to print: ");
    scanf("%d", &k);

    for (i = 0; i <= k; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }

    return 0;
}