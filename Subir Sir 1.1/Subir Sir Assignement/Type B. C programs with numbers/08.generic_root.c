// generic root of any number
#include <stdio.h>
#include <math.h>
int main()
{
    double num, root;
    printf("Enter a number : ");
    scanf("%lf", &num);

    if (num >= 0)
    {
        root = sqrt(num);
        printf("Root of %.3lf = %.3lf\n", num, root);
    }
    else
    {
        if (num == -1)
            printf("Root of %.0lf = i\n", num);
        else
        {
            root = sqrt(-num);
            printf("Root of %.3lf = %.3lfi\n", num, root);
        }
    }
    return 0;
}