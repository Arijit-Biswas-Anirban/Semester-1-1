// find out the area of rectangle
#include <stdio.h>
int main()
{
	double l, w, area;
	printf("Enter length and width : ");
	scanf("%lf%lf", &l, &w);
	if(l > 0 && w > 0)
	{
	area = l * w;
	printf("Area = %.3lf", area);
	}
	else
	printf("Invalid");
	return 0;
}
