// find the GCD of two numbers using Euclidean algorithm.
#include <stdio.h>

int main()
{
    int num1, num2, dividend, divisor, remainder;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d is", num1, num2);
    num1 = num1 > 0 ? num1 : -num1;
    num2 = num2 > 0 ? num2 : -num2;

    dividend = (num1 > num2) ? num1 : num2;
    divisor = (num1 < num2) ? num1 : num2;

    while (divisor != 0)
    {
        remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }

    printf(" = %d", dividend);

    return 0;
}