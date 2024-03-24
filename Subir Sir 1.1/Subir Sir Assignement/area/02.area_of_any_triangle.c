//Area of any triangle using Heron's formula
#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,s,area;
	printf("Enter the three sides of the triangle: ");
	scanf("%lf%lf%lf", &a, &b, &c);
	if(a>0 && b>0 && c>0)
	{
	s = (a+b+c) / 2; 	// half the perimeter
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	
	printf("Area = %.3lf", area);
	}
	else
		printf("Invalid");
	return 0;
}
