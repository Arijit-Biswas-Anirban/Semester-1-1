//C program to find whether a number is armstrong number or not
#include <stdio.h>

int main()
{
    int num, n, temp, i, j, sum = 0, Sum = 0, original_num;

    printf("Enter a number : ");
    scanf("%d", &n);

    num = n;
    original_num = n;

    while (n != 0)
    {
        for (i = 0; n != 0; i++)
        {
            temp = n;
            temp %= 10;
            sum = sum * 10 + temp;
            n /= 10;
        }
    }

    int num_of_digits = i;

    while (num != 0)
    {
        temp = num;
        temp %= 10;
        int value = 1;
        for (j = 1; j <= num_of_digits; j++)
        {
            value = value * temp;
        }
        Sum += value;
        num /= 10;
    }

    if (Sum == original_num)
    {
        printf("%d is an Armstrong Number.\n", original_num);
    }
    else
    {
        printf("%d is not an Armstrong Number.\n", original_num);
    }

    return 0;
}

/*
This C program checks whether a given number is an Armstrong number or not.
Armstrong number is a number that is equal to the sum of cubes of its digits. For example, 153
is an Armstrong Number because 153 = (1*1*1)+(5*5*5)+(3*3*3).

1. The program prompts the user to enter a number and reads the input value into the variable `n`. It also assigns the input 
value to the variable `num` and `original_num`.

2. The program initializes the variable `i` to zero and uses a nested while loop to reverse the input number `n`. The outer loop 
runs until `n` becomes zero, and the inner loop extracts each digit of the input number and stores them in the variable `sum` in 
reverse order. The variable `i` keeps track of the number of digits in the input number.

3. The program then calculates the sum of the cubes of each digit in the original input number `num` using another while loop. It 
extracts each digit of `num`, calculates its value raised to the power of the number of digits in the original input number using 
a nested for loop and adds it to the variable `Sum`.

4. The program then compares the value of `Sum` with the original input number `original_num`. If they are equal, the program 
prints that the original input number is an Armstrong number; otherwise, it prints that the original input number is not an 
Armstrong number.

5. The program terminates by returning 0.
*/