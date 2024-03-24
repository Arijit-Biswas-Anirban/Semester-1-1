// split digits from a number
#include <stdio.h>
int main()
{
    int num, temp, split_digit, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("After splitting the digits of number %d is/are : ", num);
    while (num != 0)
    {
        temp = num % 10;
        sum = sum * 10 + temp;
        num /= 10;
    }
    if (sum >= 0)
    {
        while (sum != 0)
        {
            temp = sum % 10;
            split_digit = temp;
            sum /= 10;
            printf("%d ", split_digit);
        }
        printf("%d", num);
    }
    else
    {
        sum = -1 * sum;
        while (sum != 0)
        {
            temp = sum % 10;
            split_digit = temp;
            sum /= 10;
            printf("%d ", split_digit);
        }
        printf("%d", num);
    }
    return 0;
}