#include <stdio.h>
int main()
{
	long double num1, num2, multi;
	printf("Enter two very large number: ");
	scanf("%Lf%Lf", &num1, &num2);
	
	multi = num1 * num2;
	printf("Multiplication = %.0Lf\n", multi);
	
	return 0;
}
