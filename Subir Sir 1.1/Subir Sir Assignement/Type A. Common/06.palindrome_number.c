//check whether a number is palindrome or not
#include <stdio.h>

int main()
{
    int num, i, original_num, temp_num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;

    while (num > 0)
    {
        temp_num = num;
        temp_num %= 10;
        sum = sum * 10 + temp_num;
        num /= 10;
    }

    if (original_num == sum)
    {
        printf("%d is a Palindrome Number.\n", original_num);
    }
    else
    {
        printf("%d is not a Palindrome Number.\n", original_num);
    }

    return 0;
}