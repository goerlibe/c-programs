/* C program to print following pattern:
 *
 * *
 * * *
 * * * *
 * * * * *
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
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}