#include <stdio.h>

int sumdigits(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int sum = sumdigits(num);
    
    printf("Sum of digits: %d\n", sum);
    
    return 0;
}

int sumdigits(int num)
{
    if (num == 0) {
        return 0;
    } else {
        return (num % 10) + sumdigits(num / 10);
    }
}
