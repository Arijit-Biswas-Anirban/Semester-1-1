#include <stdio.h>
int main()
{
    char str1[100], str2[100], str3[100];
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("Enter third string: ");
    gets(str3);

    int i,j,k;

    for (i=0;str1[i] != '\0'; i++)
        ;
    for (j=0;str2[j] != '\0'; j++,i++){
        str1[i] = str2[j];
    }
    for (k=0;str3[k] != '\0'; k++,i++){
        str1[i] = str3[k];
    }
    str1[i] = '\0';
    puts(str1);
    return 0;
}
