#include <stdio.h>
int main()
{
	unsigned long long int num1, num2, mod_div;
	printf("Enter two very large number: ");
	scanf("%llu%llu", &num1, &num2);
	
	mod_div = num1 % num2;
	printf("Modular Division = %llu\n",mod_div);
	
	
	return 0;
}
