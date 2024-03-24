#include <stdio.h>

int main() {
    long long int bin_num, dec_num = 0, hex_num = 0, digit, temp = 1;
    
    printf("Enter an binary number: ");
    scanf("%lld", &bin_num);

    while (bin_num != 0) {
        digit = bin_num % 2;
        if (digit != 0 && digit != 1) {
        printf("Please input a valid octal number.\n");
    		return 0;   	
    }
    	dec_num = dec_num + digit * temp;
        bin_num /= 10;
        temp = temp * 2;
    	}
    
    printf("Decimal number is: %lld\n", dec_num);
    printf("Hexadecimal representation: ");
	temp = 1;
    while (dec_num / temp != 0) {
        temp *= 16;
    }
    while (temp > 1) {
        temp /= 16;
        hex_num = dec_num / temp;
        dec_num %= temp;

        if (hex_num < 10) {
            printf("%lld", hex_num);
        } else {
            printf("%c", 'A' + (hex_num - 10));
            }
    }
    return 0;
}
