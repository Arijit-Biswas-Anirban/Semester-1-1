//print out fibonacci series
#include <stdio.h>

int main()
{
    int n, i, cell1 = 1, cell2 = 1, cell3, sum = 0;
    printf("Enter n th term: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        if (i < n)
            printf("%d + ", cell1);
        else
            printf("%d", cell1);

        sum += cell1;
        cell3 = cell1 + cell2;
        cell1 = cell2;
        cell2 = cell3;
    }

    printf(" = %d", sum);

    return 0;
}