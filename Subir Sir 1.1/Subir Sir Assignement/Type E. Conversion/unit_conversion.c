// unit conversion -> meters to kilometers or kilometers to meters
#include <stdio.h>

int main()
{
    int choice;
    double m, km;
    printf("Enter your choice (1 or 2) :\n1->m to km\n2->km to m\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter the value in meter : ");
        scanf("%lf", &m);
        km = m / 1000;
        printf("The value in kilometer : %.3lf km\n", km);
    }
    else if (choice == 2)
    {
        printf("Enter the value in kilometer : ");
        scanf("%lf", &km);
        m = km * 1000;
        printf("The value in kilometer : %.3lf m\n", m);
    }
    else
        printf("Invalid! Please enter 1 or 2\n");

    return 0;
}
