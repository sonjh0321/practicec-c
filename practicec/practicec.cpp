#include <stdio.h>
#include <math.h>
int main()
{
	double x = 2.0, y = 3.0, z = -4.5;

	printf("%d의 %d제곱은 %d이다\n",(int)x,(int)y,(int)pow(x,y));
	printf("%d의 제곱근은 %0.1lf\n",(int)y,sqrt(x));
	printf("%0.1lf의 절대값은 %0.1lf\n",z,fabs(z));

	return 0;
}