// C program to check whether a number is prime or not
#include <stdio.h>

int main()
{
    int num, i, check = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        printf("%d is not a prime number.\n", num);
    }
    else
    {
        // Check if num is divisible by any number from 2 to num-1
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                check = 0;
                break;
            }
        }

        if (check == 1)
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);
    }

    return 0;
}