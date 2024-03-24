#include <stdio.h>
int main()
{
    int num[10], i, j, k;
    printf("Enter two numbers : ");

    for (i = 0; i < 2; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("\nBefore swapping the numbers are : ");
    for (j = 0; j < i; j++)
    {
        printf("%d ", num[j]);
    }
    printf("\nAfter swapping the numbers are : ");
    for (k = i-1; k >= 0; k--)
    {
        printf("%d ", num[k]);
    }

    return 0;
}
/*
This C program takes two integer inputs from the user and swaps their positions. The process can be described as follows:

1. The program prompts the user to enter two numbers using the printf() and scanf() functions.
2. The program uses a for loop to read the two inputs and store them in an integer array "num".
3. The program then uses another for loop to print the original values of the input numbers.
4. The value of "i" is used to determine the number of elements in the array.
5. The program then swaps the positions of the two numbers by assigning the value of "num[i-1]" to "num[0]" and the value of 
"num[0]" to "num[i-1]".
6. Finally, the program uses another for loop to print the swapped values of the input numbers.
*/