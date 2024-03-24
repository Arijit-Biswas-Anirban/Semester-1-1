//print out ASCII value of all character
#include <stdio.h>
int main()
{
    int i;

    for (i = 0; i <= 127; i++)
    {
        printf("ASCII value of the character %c is %d\n", i, i);
    }

    return 0;
}

