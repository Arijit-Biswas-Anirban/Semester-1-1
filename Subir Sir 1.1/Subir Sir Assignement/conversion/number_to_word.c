#include <stdio.h>



int main() {
    int num, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid number.\n");
        return 0;
    }

    while (num != 0) {
        if (num >= 10000000) {
            temp = num / 10000000;
            num %= 10000000;
            printf("%d crore ", temp);
            continue;
        } else if (num >= 100000) {
            temp = num / 100000;
            num %= 100000;
            printf("%d lakhs ", temp);
            continue;
        } else if (num >= 1000) {
            temp = num / 1000;
            num %= 1000;
            printf("%d thousand ", temp);
            continue;
        } else if (num >= 100) {
            temp = num / 100;
            num %= 100;
            printf("%d hundred ", temp);
            continue;
        } 
        
        if (num >= 90) {
        printf("ninety ");
        num -= 90;
    } else if (num >= 80) {
        printf("eighty ");
        num -= 80;
    } else if (num >= 70) {
        printf("seventy ");
        num -= 70;
    } else if (num >= 60) {
        printf("sixty ");
        num -= 60;
    } else if (num >= 50) {
        printf("fifty ");
        num -= 50;
    } else if (num >= 40) {
        printf("forty ");
        num -= 40;
    } else if (num >= 30) {
        printf("thirty ");
        num -= 30;
    } else if (num >= 20) {
        printf("twenty ");
        num -= 20;
    }

    if (num == 19) {
        printf("nineteen");
    } else if (num == 18) {
        printf("eighteen");
    } else if (num == 17) {
        printf("seventeen");
    } else if (num == 16) {
        printf("sixteen");
    } else if (num == 15) {
        printf("fifteen");
    } else if (num == 14) {
        printf("fourteen");
    } else if (num == 13) {
        printf("thirteen");
    } else if (num == 12) {
        printf("twelve");
    } else if (num == 11) {
        printf("eleven");
    } else if (num == 10) {
        printf("ten");
    } else if (num == 9) {
        printf("nine");
    } else if (num == 8) {
        printf("eight");
    } else if (num == 7) {
        printf("seven");
    } else if (num == 6) {
        printf("six");
    } else if (num == 5) {
        printf("five");
    } else if (num == 4) {
        printf("four");
    } else if (num == 3) {
        printf("three");
    } else if (num == 2) {
        printf("two");
    } else if (num == 1) {
        printf("one");
    }
        break;
    }

    printf("\n");
    return 0;
}
