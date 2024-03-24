#include <stdio.h>

int main() {
    char hex_digit;
    int dec_num = 0, value, temp = 1;

    printf("Enter a hexadecimal number: ");

    while (1) {
        scanf("%c", &hex_digit);

        if (hex_digit == '\n')
            break;

        if (hex_digit >= '0' && hex_digit <= '9') {
            value = hex_digit - '0';
        } else if (hex_digit >= 'A' && hex_digit <= 'F') {
            value = hex_digit - 'A' + 10;
        } else if (hex_digit >= 'a' && hex_digit <= 'f') {
            value = hex_digit - 'a' + 10;
        } else {
            printf("Invalid hexadecimal number.\n");
            return 0;
        }

        dec_num = dec_num * 16 + value;
    }

    printf("Decimal representation: %d\n", dec_num);

    return 0;
}
