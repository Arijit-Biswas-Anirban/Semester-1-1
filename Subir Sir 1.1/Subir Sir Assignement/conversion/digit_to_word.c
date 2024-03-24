#include <stdio.h>
int main()
{
	int num, digit, sum=0;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	while(num != 0)
	{
		digit = num % 10;
		sum = sum * 10 + digit;
		num /= 10;
	}
	//printf("%d\n", sum);
	
	while(sum != 0)
	{
		digit = sum % 10;
		if(digit == 0)
			printf("Zero ");
		else if(digit == 1)
			printf("One ");
		else if(digit == 2)
			printf("Two ");
		else if(digit == 3)
			printf("Three ");
		else if(digit == 4)
			printf("Four ");
		else if(digit == 5)
			printf("Five ");
		else if(digit == 6)
			printf("Six ");
		else if(digit == 7)
			printf("Seven ");
		else if(digit == 8)
			printf("Eight ");
		else
			printf("Nine ");
		sum /= 10;
		
	}
	
	return 0;
}