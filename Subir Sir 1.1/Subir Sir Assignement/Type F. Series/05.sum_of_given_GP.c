// find out the sum of given G.P
#include <stdio.h>
int main()
{
    int n, i;
    double num1, r, term = 1.0, sum = 0.0;
    printf("Enter the first term and common ratio : ");
    scanf("%lf %lf", &num1, &r);
    printf("Enter range : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += term * num1;
        term *= r;
    }
    printf("Sum of GP = %.2lf", sum);
    return 0;
}
