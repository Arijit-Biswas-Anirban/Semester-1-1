#include <stdio.h>
#define PI 3.14159
int main()
{
	double r,l,w,a,b,c,c_p,r_p,t_p;
	printf("Enter radius of circle, lenght and width of rectangle and three sides of triangle: ");	
	scanf("%lf%lf%lf%lf%lf%lf", &r, &l, &w, &a, &b, &c);
	
	c_p = 2 * PI * r;
	r_p = 2 * ( l + w );
	t_p = a + b + c;
	printf("Perimeter of:\nCircle = %.3lf\nRectangle = %.3lf\nTriangle = %.3lf\n", c_p, r_p, t_p);
	return 0;
}