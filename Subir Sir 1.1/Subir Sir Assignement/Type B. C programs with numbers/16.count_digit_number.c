// count number of digits in a number
#include <stdio.h>
int main()
{
    int num, i, temp;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Number of Digit/Digits in %d is : ", num);
    for (i = 0; num != 0; i++)
    {
        temp = num % 10;
        num /= 10;
    }
    printf("%d", i);

    return 0;
}