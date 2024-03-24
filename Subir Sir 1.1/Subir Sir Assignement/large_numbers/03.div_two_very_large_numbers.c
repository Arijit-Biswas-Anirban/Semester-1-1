#include <stdio.h>
int main()
{
	long double num1, num2, div;
	printf("Enter two very large number: ");
	scanf("%Lf%Lf", &num1, &num2);
	
	div = num1 / num2;
	printf("Division = %Lf\n", div);
	
	
	return 0;
}
