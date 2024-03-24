// find out the power of a number
#include <stdio.h>
int main()
{
    double base, exponent, temp_exponent, value = 1.0;

    printf("Enter the base number : ");
    scanf("%lf", &base);

    printf("Enter the exponent value : ");
    scanf("%lf", &exponent);

    temp_exponent = exponent;

    if (temp_exponent > 0)
    {
        while (temp_exponent != 0)
        {
            value *= base;
            temp_exponent--;
        }

        printf("%lf ^ %lf = %.2lf\n", base, exponent, value);
    }
    else if (temp_exponent == 0)
    {
        printf("%lf ^ %lf = %d\n", base, exponent, 1);
    }
    
    else
    {
        temp_exponent = (-1) * temp_exponent;

        while (temp_exponent != 0)
        {
            value *= base;
            temp_exponent--;
        }

        printf("%lf ^ %lf = %lf\n", base, exponent, 1.0 /value);
    }
    return 0;
}