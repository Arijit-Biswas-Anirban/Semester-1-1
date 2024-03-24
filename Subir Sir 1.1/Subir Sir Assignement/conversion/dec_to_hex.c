#include <stdio.h>

int main() {
    int dec_num, temp = 1, hex_num;

    printf("Enter decimal number: ");
    scanf("%d", &dec_num);

    printf("Hexadecimal representation: ");

    while (dec_num / temp != 0) {
        temp *= 16;
    }
    while (temp > 1) {
        temp /= 16;
        hex_num = dec_num / temp;
        dec_num %= temp;

        if (hex_num < 10) {
            printf("%d", hex_num);
        } else {
            printf("%c", 'A' + (hex_num - 10));
            }
    }
    return 0;
}
