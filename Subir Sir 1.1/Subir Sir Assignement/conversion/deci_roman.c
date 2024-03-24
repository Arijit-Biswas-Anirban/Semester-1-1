#include <stdio.h>

int main() {
    int num, temp;
    
    printf("Enter a number between 1-3999: ");
    scanf("%d", &num);
    
    if (num <= 0 || num > 3999) {
        printf("Invalid number.\n");
        return 0;
    }

    temp = num / 1000;
    num %= 1000;
    while (temp > 0) {
        printf("M");
        temp--;
    }

    temp = num / 100;
    num %= 100;
    if (temp == 9) {
        printf("CM");
    } else if (temp >= 5) {
        printf("D");
        temp -= 5;
        while (temp > 0) {
            printf("C");
            temp--;
        }
    } else if (temp == 4) {
        printf("CD");
    } else {
        while (temp > 0) {
            printf("C");
            temp--;
        }
    }

    temp = num / 10;
    num %= 10;
    if (temp == 9) {
        printf("XC");
    } else if (temp >= 5) {
        printf("L");
        temp -= 5;
        while (temp > 0) {
            printf("X");
            temp--;
        }
    } else if (temp == 4) {
        printf("XL");
    } else {
        while (temp > 0) {
            printf("X");
            temp--;
        }
    }
    
    // Ones place
    if (num == 9) {
        printf("IX");
    } else if (num >= 5) {
        printf("V");
        num -= 5;
        while (num > 0) {
            printf("I");
            num--;
        }
    } else if (num == 4) {
        printf("IV");
    } else {
        while (num > 0) {
            printf("I");
            num--;
        }
    }
    
    return 0;
}

