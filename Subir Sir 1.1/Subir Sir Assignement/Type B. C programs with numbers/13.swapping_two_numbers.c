// swapping tow numbers using third variable
#include <stdio.h>

int main()
{
    int num1, num2, temp;

    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    temp = num1;
    printf("Before swapping first number was : %d\n", num1);
    num1 = num2;
    printf("After swapping first number is : %d\n\n", num1);
    printf("Before swapping second number was : %d\n", num2);
    num2 = temp;
    printf("After swapping second number is : %d\n", num2);

    return 0;
}