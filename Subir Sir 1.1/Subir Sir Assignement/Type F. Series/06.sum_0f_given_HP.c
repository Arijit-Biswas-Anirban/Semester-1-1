// find out the sum of given H.P
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
    sum = 1 / sum;  // HP = 1 / AP
    printf("Sum = %.4lf", sum);

    return 0;
}
