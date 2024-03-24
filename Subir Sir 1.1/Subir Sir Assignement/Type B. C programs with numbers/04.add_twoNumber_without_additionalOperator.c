// add two number without using additional operator
#include <stdio.h>
int main()
{
    int num1, num2, i, add;
    printf("Enter first number and second number : ");
    scanf("%d %d", &num1, &num2);

    add = num1;

    if (num2 >= 0)
    {
        for (i = 1; i <= num2; i++)
        {
            add++;
        }

        printf("Addition of (%d) + (%d) = %d\n", num1, num2, add);
    }

    else // num2 is negative
    {
        for (i = num2; i < 0; i++)
        {
            add--;
        }

        printf("Addition of (%d) + (%d) = %d\n", num1, num2, add);
    }
    return 0;
}