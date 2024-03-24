// find out the sum of given AP
#include <stdio.h>
int main()
{
    // using formula
    double num1, num2, d, range, sum;
    printf("Enter the range : ");
    scanf("%lf", &range);
    printf("Enter the first and second number : ");
    scanf("%lf%lf", &num1, &num2);
    d = num2 - num1; // difference
    sum = (range / 2.0) * ((2 * num1) + (range - 1) * d);
    printf("Sum = %.1lf", sum);

    // using loop
    // double n, n1, d, i, sum = 0;
    // printf("Enter the range : ");
    // scanf("%lf", &n);
    // printf("Enter the first number and difference : ");
    // scanf("%lf%lf", &n1, &d);

    // printf("%.0lf + ", n1);
    // sum += n1;
    // for (i = 1; i < n; i++)
    // {
    //     n1 += d;
    //     if (i < n - 1)
    //         printf("%.0lf + ", n1);
    //     sum += n1;
    // }
    // printf("%.0lf", n1);
    // printf(" = %.0lf", sum);
    return 0;
}
