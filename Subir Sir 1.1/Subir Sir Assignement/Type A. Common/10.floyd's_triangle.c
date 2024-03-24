// print out Floyd's triangle
#include <stdio.h>

int main()
{
    int row, i, j, number = 1;
    printf("Enter number of rows: ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%-5d", number);
            number++;
        }

        printf("\n");
    }

    return 0;
}
