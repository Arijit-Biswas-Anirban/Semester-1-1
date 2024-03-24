#include <stdio.h>

int main() {
    int bin_num, dec_num = 0, oct_num = 0, digit, temp = 1;
    
    printf("Enter an binary number: ");
    scanf("%d", &bin_num);

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
    
    printf("Decimal number is: %d\n", dec_num);
    	
    printf("Octal representation: ");
	temp = 1;
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
