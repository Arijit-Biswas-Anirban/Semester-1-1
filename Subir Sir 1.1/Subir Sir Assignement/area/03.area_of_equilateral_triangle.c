// Area of equilateral triangle
#include <stdio.h>
#include <math.h>
int main()
{
	double side, area;
	printf("Enter the side : ");
	scanf("%lf", &side);
	if(side > 0)
	{
	area = (1.0/4) * sqrt(3) * side * side;
	printf("Area = %.3lf", area);
	}
	else
	printf("Invalid");
	return 0;
}