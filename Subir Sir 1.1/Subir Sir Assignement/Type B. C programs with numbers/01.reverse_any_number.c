// reverse any number
#include <stdio.h>

int main()
{
    int num, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Before reversing the number is : %d\n", num);

    while (num != 0)
    {
        temp = num % 10;
        sum = sum * 10 + temp;
        num = num / 10;
    }

    printf("After reversing the number is : %d\n", sum);

    return 0;
}
