// largest among 3 numbers using binary minus operator
#include <stdio.h>
int main()
{
    int num1, num2, num3, max;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 - num2 > 0 && num1 - num3 > 0)
        max = num1;
    else
    {
        if (num2 - num3 > 0)
            max = num2;
        else
            max = num3;
    }

    printf("Max = %d\n", max);

    return 0;
}
