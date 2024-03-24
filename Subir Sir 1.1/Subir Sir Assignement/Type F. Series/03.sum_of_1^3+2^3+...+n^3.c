// find out the sum of the series : 1^3 + 2^3 + ... + n^3
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter n th term : ");
    scanf("%d", &n);
    printf("Sum of : ");

    for (i=1; i <= n; i++)
    {
        sum += i * i * i;
        if (i<n)
            printf("%d ^ 3 + ", i);
        else
            printf("%d ^ 3", n);
    }
    printf(" = %d", sum);

    return 0;
}