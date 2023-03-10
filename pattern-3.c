/* C program to print following pattern:
 1
 2
 3
 4
 5
 6
 7
 8
 9
 10
 */

#include <stdio.h>

int main()
{
    int i, j, k;

    printf("Enter number of lines to print: ");
    scanf("%d", &k);

    for (i = 0; i <= k; i++)
    {
        for (j = i; j <= i; j++)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }

    return 0;
}