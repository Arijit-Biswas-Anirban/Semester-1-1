#include <stdio.h>

int main() {
    int bin_num, dec_num = 0, digit, temp = 1;
    
    printf("Enter a binary number: ");
    scanf("%d", &bin_num);

    while (bin_num != 0) {
        digit = bin_num % 10;
        if (digit != 0 && digit != 1) {
        printf("Please input a valid octal number.\n");
    		return 0;   	
    }
    	dec_num = dec_num + digit * temp;
        bin_num /= 10;
        temp = temp * 2;
    	}
    
    printf("Decimal number is: %d\n", dec_num);
    
    return 0;
}
