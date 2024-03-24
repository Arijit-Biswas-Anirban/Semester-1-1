#include <stdio.h>
#define PI 3.14159
int main()
{
	double r,v,a;
	printf("Enter radius : ");	
	scanf("%lf", &r);
	v = (4.0 / 3) * PI * r * r * r;
	a = 4 * PI * r * r;
	printf("Volume = %.3lf\nArea = %.3lf\n", v, a);
	return 0;
}
