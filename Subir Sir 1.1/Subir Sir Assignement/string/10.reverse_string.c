#include <stdio.h>

int main() {
    char a[100];
    int len = 0;

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
