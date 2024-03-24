﻿#include <stdio.h>

int main() {
    int oct_num, dec_num = 0, bin_num = 0, digit, temp = 1;
    
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
    temp = 1;
    while(dec_num != 0)
    {
    	digit = dec_num % 2;
    	bin_num += digit * temp;
    	dec_num /= 2;
    	temp *= 10;
    }
    printf("Binary number is: %d\n", bin_num);
    return 0;
}
