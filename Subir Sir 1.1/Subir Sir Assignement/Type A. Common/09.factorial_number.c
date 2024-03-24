//print the factorial of given number
#include <stdio.h>

int main()
{
    int num, i, fact = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        for (i = 1; i <= num; i++)
        {
            fact *= i;
        }

        printf("%d! = ", num);

        for (i = 1; i <= num; i++)
        {
            if (i < num)
                printf("%dx", i);
            else
                printf("%d = ", num);
        }

        printf("%d", fact);
    }
    else
        printf("Invalid");
    return 0;
}