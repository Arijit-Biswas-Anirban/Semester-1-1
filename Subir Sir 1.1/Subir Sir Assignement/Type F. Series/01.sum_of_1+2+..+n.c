// Find the sum of the series 1+2+...+n
#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter n th term : ");
    scanf("%d", &n);
    printf("Sum of : ");
    for (i = 1; i <= n; i++)
    {
        sum += i;
        if (i < n)
            printf("%d + ", i);
        else
            printf("%d", n);
    }
    printf(" = %d\n", sum);

    return 0;
}
