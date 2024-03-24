/*  C Program to Reverse each word in a sentence  */

#include <stdio.h>

int main()
{

    char str[100], text[100];
    int i = 0, j = 0;
    printf("\nEnter any Sentence :: ");
    gets(str);

    // Character reversing starts
    while (str[i] != '\0')
        i++;
    while (i > 0)
    {

        text[j] = str[i-1];
        i--;
        j++;
    }
    text[j] = '\0';
    // Character reversing ends
    printf("\nReversed Sentence :: ");

    for (i = 0; text[i] != '\0'; i++)
    {

        if (text[i + 1] == ' ' || text[i + 1] == '\0')
        {

            for (j = i; j >= 0; j--)
            {
                printf("%c", text[j]);
                if (text[j] == ' ')
                    break;
            }
            printf(" ");
        }
    }

    return 0;
}