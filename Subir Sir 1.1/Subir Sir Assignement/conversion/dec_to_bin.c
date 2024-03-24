#include <stdio.h>

int main() {
    int dec_num, bin_num = 0, temp, place = 1;

    printf("Enter decimal number: ");
    scanf("%d", &dec_num);

    while (dec_num != 0) {
        temp = dec_num % 2;
        bin_num += temp * place;
        dec_num /= 2;
        place *= 10;
    }

    printf("Binary representation: %d\n", bin_num);

    return 0;
}
