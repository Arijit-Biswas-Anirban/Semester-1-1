// find out the area of rhombus
#include <stdio.h>
int main()
{
	double b, h, area;
	printf("Enter base and height : ");
	scanf("%lf%lf", &b, &h);
	if(b > 0 && h > 0)
	{
	area = (b * h);
	printf("Area = %.3lf", area);
	}
	else
	printf("Invalid");
	return 0;
}
