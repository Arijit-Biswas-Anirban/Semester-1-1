// nCr factor of given number
#include <stdio.h>
int main()
{
    int n, r, i, n_fact = 1, r_fact = 1, n_minus_r_fact = 1, nCr;
    printf("Please enter n >= r >= 0\n");

    printf("Enter total number of things (n) : ");
    scanf("%d", &n);

    printf("Enter the number of things to be chosen out of n things (r) : ");
    scanf("%d", &r);

    if (n==0)
    {
        printf("Invalid! please input n > 0");
    }
    else if (n >= r && r >= 0)
    {
        for (i = 1; i <= n; i++)
        {
            n_fact *= i;
        }

        for (i = 1; i <= r; i++)
        {
            r_fact *= i;
        }

        for (i = 1; i <= (n - r); i++)
        {
            n_minus_r_fact *= i;
        }

        nCr = n_fact / (r_fact * n_minus_r_fact);
        printf("NCR factor = %d\n", nCr);
    }
    else
    {
        printf("\nWrong input! Please enter n >= r >= 0.\n");
    }
    return 0;
}