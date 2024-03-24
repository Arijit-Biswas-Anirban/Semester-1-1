#include <stdio.h>
int main()
{
    double deci_num, frac_deci_num;
    int integer_deci_num, arr[50], binary_int_deci, i, j;
    printf("Enter a Decimal Number : ");
    scanf("%lf", &deci_num);
    integer_deci_num = (int)deci_num;
    frac_deci_num = deci_num - integer_deci_num;

    printf("The binary value of %lf is ", deci_num);
    // convert integer part to binary
    for (i = 0; integer_deci_num != 0; i++)
    {
        binary_int_deci = integer_deci_num % 2;
        arr[i] = binary_int_deci;
        integer_deci_num /= 2;
    }
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }

    // convert fractional part to binary
    for (i = 0; i < 6; i++)
    {
        frac_deci_num *= 2;
        int temp = frac_deci_num;
        arr[i] = temp;
        if (temp == 1)
        {
            frac_deci_num = frac_deci_num - temp;
        }
    }
    printf(".");
    for (j = 0; j < i; j++)
    {
        printf("%d", arr[j]);
    }

    return 0;
}
