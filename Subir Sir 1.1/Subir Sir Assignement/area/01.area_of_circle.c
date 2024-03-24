//Area of circle
#include <stdio.h>
#define PI 3.14159
int main()
{
	float radius, area;
	printf("Enter radius : ");
	scanf("%f", &radius);
	if(radius >= 0)
	{
	area = PI * radius * radius;
	printf("Area of circle = %.3f", area);
	}
	else
	{
		printf("Invalid radius!");
	}
	return 0;
}
// 01. area of circle
