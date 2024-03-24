// subtract two number without using subtraction operator
#include <stdio.h>
int main()
{
    int num1, num2, i, sub;
    printf("Enter first number and second number : ");
    scanf("%d %d", &num1, &num2);

    sub = num1;

    if (num2 >= 0)
    {
        for (i = 1; i <= num2; i++)
        {
            sub--;
        }

        printf("Subtraction of (%d) - (%d) = %d", num1, num2, sub);
    }

    else
    {
        for (i = num2; i < 0; i++)
        {
            sub++;
        }

        printf("Subtraction of (%d) - (%d) = %d", num1, num2, sub);
    }

    return 0;
}