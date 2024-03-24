#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
	double r,h,v,a;
	printf("Enter radius and height : ");	
	scanf("%lf%lf", &r, &h);
	v = PI * r * r * (h / 3);
	a = PI * r * ( r + sqrt(h * h + r * r));
	printf("Volume = %.3lf\nArea = %.3lf\n", v, a);
	return 0;
}
