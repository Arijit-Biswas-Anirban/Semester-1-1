// find out prime factor of given number 
#include <stdio.h>
int main()
{
    int num, i, j, prime_fact = 1, isPrime = 1;
    printf("Enter a number : ");
    scanf("%d", &num);
    int org_num = num;

    if (num >= 2)
    {

        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
            printf("Prime Factor of %d is %d = %d\n", org_num, org_num, org_num);
        else
        {
            printf("All Prime Factors of %d are: \n", org_num);
            for (j = 2; j <= num;)
            {
                if (num % j == 0)
                {
                    prime_fact = j;

                    if (prime_fact < num)
                    {
                        printf("%d x ", prime_fact);
                    }
                    else
                    {
                        printf("%d = %d", prime_fact, org_num);
                    }
                    num = num / prime_fact;
                }
                else
                {
                    j++;
                }
            }
        }
    }
    else
    {
        printf("%d Have no Prime Factor.\n", org_num);
    }
    return 0;
}