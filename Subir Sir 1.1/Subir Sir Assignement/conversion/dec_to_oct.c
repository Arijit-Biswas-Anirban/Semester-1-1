#include <stdio.h>

int main() {
    int dec_num, oct_num, temp= 1;

    printf("Enter decimal number: ");
    scanf("%d", &dec_num);

    printf("Octal representation: ");

    while (dec_num / temp != 0) {
        temp *= 8;
    }
    while (temp > 1) {
        temp /= 8;
        oct_num = dec_num / temp;
        dec_num %= temp;
		printf("%d", oct_num);
    }

    return 0;
}
