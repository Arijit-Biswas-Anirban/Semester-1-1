//solve quadratic equation
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, discriminant, realPart, imaginaryPart, root1, root2;
    printf("Enter coefficients a, b, c : ");
    scanf("%lf%lf%lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (a==0)
    {
        printf("Invalid");
    }
    else if (discriminant > 0) // two real roots
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are : %.3lf and %.3lf\n", root1, root2);
    }
    else if (discriminant == 0) // one real root
    {
        root1 = root2 = -b / (2 * a);
        printf("Root is : %.3lf\n", root1);
    }
    else if (discriminant < 0) // two unreal roots
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are: %.3lf+%.3lfi and %.3lf-%.3lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
    else 
         printf("Invalid");

    return 0;
}