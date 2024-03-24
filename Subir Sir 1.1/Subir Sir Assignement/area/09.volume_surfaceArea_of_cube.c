#include <stdio.h>
int main()
{
	double e,v,a;
	printf("Enter edge value : ");
	scanf("%lf", &e);
	a = 6 * e * e;
	v = e * e * e;
	printf("Volume = %.3lf\nArea = %.3lf\n", v, a);
	return 0;
}