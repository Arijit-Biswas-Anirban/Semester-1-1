#include <stdio.h>

int main() {
    long long int bin_num1, bin_num2, dec_num1 = 0, dec_num2 = 0,digit, temp = 1, bin_add=0;
    
    printf("Enter two binary number: ");
    scanf("%lld%lld", &bin_num1, &bin_num2);

    while (bin_num1 != 0) {
        digit = bin_num1 % 10;
        if (digit != 0 && digit != 1) {
        printf("Please input a valid binary number.\n");
    		return 0;   	
    }
    	dec_num1 = dec_num1 + digit * temp;
        bin_num1 /= 10;
        temp = temp * 2;
    	}
    	temp = 1;
    while (bin_num2 != 0) {
        digit = bin_num2 % 10;
        if (digit != 0 && digit != 1) {
        printf("Please input a valid binary number.\n");
    		return 0;   	
    }
    	dec_num2 = dec_num2 + digit * temp;
        bin_num2 /= 10;
        temp = temp * 2;
    	}
    
    printf("1st Decimal number: %lld\n", dec_num1);
    printf("2nd Decimal number: %lld\n", dec_num2);
    
   long long int sum = dec_num1 + dec_num2;
    	temp = 1;
    	while (sum != 0) {
        digit = sum % 2;
        bin_add += digit * temp;
        sum /= 2;
        temp *= 10;
    }

    printf("Binary addition: %lld\n", bin_add);	
    	
    	
    return 0;
}
