//generate multiplication table
#include <stdio.h>

int main()
{
    int i = 1, product, num, range;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the range: ");
    scanf("%d", &range);

        printf("The multiplication table of %d is :\n", num);
        while (i <= range)
        {
            product = num * i;
            printf("%d x %d = %d\n", num, i, product);
            i++;
        }
        printf("\n");

    return 0;
}
