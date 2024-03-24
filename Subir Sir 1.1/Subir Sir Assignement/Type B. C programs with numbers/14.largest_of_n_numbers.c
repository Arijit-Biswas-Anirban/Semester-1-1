// largest number among 'n' numbers.
#include <stdio.h>
int main()
{
    int n, max, num[1000], i;
    printf("Enter the number of components : ");
    scanf("%d", &n);
    printf("Enter the components: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    max = num[0];
    for (i = 1; i < n; i++)
    {
        if (max < num[i])
            max = num[i];
    }
    printf("\nLargest = %d\n", max);

    return 0;
}