// Find the LCM of two numbers using prime factorization method
#include <stdio.h>

int main()
{
    int num1, num2, i, LCM = 1;

    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    printf("LCM of %d and %d is ", num1, num2);
    if (num1 < 0)
        num1 *= -1;
    if (num2 < 0)
        num2 *= -1;
    for (i = 2; i <= num1;)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            num1 = num1 / i;
            num2 = num2 / i;
            LCM = LCM * i;
        }
        else
        {
            i++;
        }
    }
    LCM = LCM * num1 * num2;
    printf(" = %d", LCM);

    return 0;
}