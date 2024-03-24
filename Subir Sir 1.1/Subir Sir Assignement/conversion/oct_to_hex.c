#include <stdio.h>

int main() {
    int oct_num, dec_num = 0, hex_num = 0, digit, temp = 1;
    
    printf("Enter an octal number: ");
    scanf("%d", &oct_num);

    while (oct_num != 0) {
        digit = oct_num % 10;
        if (digit <= 7) {
            oct_num /= 10;
            dec_num = dec_num + digit * temp;
            temp = temp * 8;
        }
        else {
            printf("Please input a valid octal number.\n");
            return 0;
        }
    }
    
    printf("Decimal number is: %d\n", dec_num);
    printf("Hexadecimal number is: ");
    
    temp = 1;
    while(dec_num / temp != 0)
    {
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
