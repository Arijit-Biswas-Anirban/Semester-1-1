#include <stdio.h>
int POWER(int base, int exponent)
{
	if(exponent == 0)
		return 1;
	else
		return base * POWER(base, exponent - 1);;
}
int main()
{
	int base, exponent, result;
	printf("Enter Base : ");
	scanf("%d", &base);
	printf("Enter Exponent : ");
	scanf("%d", &exponent);
	result = POWER(base, exponent);
	printf("Result = %d\n", result);
	return 0;
}
