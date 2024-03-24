#include <stdio.h>
#include <stdlib.h>

int main() {
    char *a;
    int n,len = 0;
    scanf("%d", &n);

    a = (char *)malloc(n * sizeof(char));
    getchar();
    printf("Enter the string: ");
    gets(a);

    while (a[len] != '\0')
        len++;

    for (int i = 0; i < len / 2; i++) {
        char temp = a[i];
        a[i] = a[len - i - 1];
        a[len - i - 1] = temp;
    }

    printf("Reversed string: ");
    puts(a);

    return 0;
}
