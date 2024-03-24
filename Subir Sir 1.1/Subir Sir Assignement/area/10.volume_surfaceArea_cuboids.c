#include <stdio.h>
int main()
{
	double l,w,h,v,a;
	printf("Enter length,width and height : ");
	scanf("%lf%lf%lf", &l, &w, &h);
	v = l * w * h;
	a = 2 * ((w * l) + (h * l) + (h * w));
	printf("Volume = %.3lf\nArea = %.3lf\n", v, a);
	
	return 0;
}