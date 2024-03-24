// to check whether a number is strong or not
#include <stdio.h>

int main()
{
    int num, i, n, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;

    if (num > 0)
    {
        while (n > 0)
        {
            temp = n;
            temp %= 10;
            int fact = 1;
            for (i = 1; i <= temp; i++)
            {

                fact *= i;
            }

            sum += fact;
            n /= 10;
        }

        if (sum == num)
        {
            printf("%d is strong number.\n", num);
        }
        else
        {
            printf("%d is not strong number.\n", num);
        }
    }

    else
    {
        printf("%d is not strong number.\n", num);
    }

    return 0;
}