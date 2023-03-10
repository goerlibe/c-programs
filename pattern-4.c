/* C program to print following pattern:
1, 2, 3, 4, 5, 6, 7, 8, 9, 10
 */

#include <stdio.h>

int main()
{
    int i, j, k;

    printf("Enter number of elements to print: ");
    scanf("%d", &k);

    for (i = 0; i <= 0; i++)
    {
        for (j = 1; j <= k; j++)
        {
            printf(", %d", j);
        }
        printf("\n");
    }

    return 0;
}