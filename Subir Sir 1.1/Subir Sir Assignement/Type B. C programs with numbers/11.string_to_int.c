// string to integer
#include <stdio.h>
#define length 50

int main()
{
    char string[length];
    int i, j, num = 0;

    printf("Enter a string and press enter:\n");

    for (i = 0; i < length; i++)
    {
        scanf("%c", &string[i]);
        if (string[i] == '\n')
            break;
    }

    printf("After converting entered string to int: ");
    for (j = 0; j < i; j++)
    {
        num = num * 10 + (string[j] - 48);
    }
    printf("%d", num);

    return 0;
}