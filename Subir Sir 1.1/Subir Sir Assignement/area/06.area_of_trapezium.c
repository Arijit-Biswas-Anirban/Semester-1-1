// find out the area of a trpezium
#include <stdio.h>
int main()
{
	double b1, b2, h, area;
	printf("Enter parallel sides and height : ");
	scanf("%lf%lf%lf", &b1, &b2, &h);
	if(b1 > 0 && b2 > 0 && h > 0)
	{
	area = (1.0 / 2) * (b1 + b2) * h;
	printf("Area = %.3lf", area);
	}
	else
	printf("Invalid");
	return 0;
}
