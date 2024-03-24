// find out sum of digits of a number
#include <stdio.h>
int main()
{
    int num, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int number = num;
    printf("Your entered number is %d and the sum of the digits is ", number);

    while (num != 0)
    {
        temp = num % 10;
        sum += temp;
        num /= 10;

        if (num != 0)
            printf("%d +", temp);
    }

    printf(" %d", temp);

    printf(" = %d", sum);

    return 0;
}
