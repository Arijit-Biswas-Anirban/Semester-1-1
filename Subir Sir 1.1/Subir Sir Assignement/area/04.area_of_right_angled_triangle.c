// find out the area of right angled triangle
#include <stdio.h>
int main()
{
	double b, h, area;
	printf("Enter base and height : ");
	scanf("%lf%lf", &b, &h);
	if(b > 0 && h > 0)
	{
	area = (b * h) / 2;
	printf("Area = %.3lf", area);
	}
	else
	printf("Invalid");
	return 0;
}
