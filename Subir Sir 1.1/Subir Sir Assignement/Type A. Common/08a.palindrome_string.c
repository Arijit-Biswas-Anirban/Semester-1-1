//check whether a string is palindrome or not
#include <stdio.h>
#define length 50

int main()
{
    char string[length];
    int i, j, temp, palindrome = 1;

    printf("Enter a string and after entered the string please provide a new line by clicking enter button\n");

    for (i = 0; i <= length; i++)
    {
        scanf("%c", &string[i]);
        temp = i - 1;
        if (string[i] == '\n')
            break;
    }

    printf("\nYour entered string is : ");

    for (j = 0; j <= i; j++)
    {
        printf("%c", string[j]);
    }

    i = 0;
    j = temp;

    while (i < j)
    {
        if (string[i] != string[j])
        {
            palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (palindrome == 1)
        printf("Yes, the entered string is Palindrome.\n");
    else
        printf("No, the entered string is not Palindrome.\n");

    return 0;
}
