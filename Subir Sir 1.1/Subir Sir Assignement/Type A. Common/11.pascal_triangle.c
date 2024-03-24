//print out Pascal's triangle
#include <stdio.h>

int main()
{
    int row, i, j, space, nCr;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    for (i = 0; i <= row; i++)
    {
        for (space = 1; space <= (row - i); space++)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                nCr = 1;
                printf("%d ", nCr);
            }
            else
            {
                nCr = nCr * (i - j + 1) / j;
                printf("%d ", nCr);
            }
        }
        printf("\n");
    }

    return 0;
}