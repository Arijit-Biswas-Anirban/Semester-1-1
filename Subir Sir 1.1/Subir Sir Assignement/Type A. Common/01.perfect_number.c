//C program to find whether a number is perfect number or not
#include <stdio.h>
int main()
{
    int num, i, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (i = 1; i != num; i++)
    {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("\nThe number %d is a perfect number.\n", num);
    else
        printf("\nThe number %d is not a perfect number.\n", num);

    return 0;
}
