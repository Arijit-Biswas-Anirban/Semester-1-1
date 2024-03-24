#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* a;
    int n, i, j;

    printf("Enter how many characters you need: ");
    scanf("%d", &n);
    getchar();

    a = (char*)malloc(n * sizeof(char));
    gets(a);

    for (i = 0, j = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'A' || a[i] == 'a' || a[i] == 'E' || a[i] == 'e' || a[i] == 'I' || a[i] == 'i' || a[i] == 'O' || a[i] == 'o' || a[i] == 'U' || a[i] == 'u' || a[i] == ' ')
        {
            a[j] = a[i];
            j++;
        }
    }
    a[j] = '\0'; 
	printf("After deleting all consonants the string is : \n");
    puts(a);


    return 0;
}

