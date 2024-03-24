// find out the sum of the series 1^2 + 2^2 + ...+ n^2
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter n th term : ");
    scanf("%d", &n);
    printf("Sum of : ");

    for (i=1; i <= n; i++)
    {
        sum += i * i;
        if (i<n)
            printf("%d ^ 2 + ", i);
        else
            printf("%d ^ 2", n);
    }
    printf(" = %d", sum);

    return 0;
}
