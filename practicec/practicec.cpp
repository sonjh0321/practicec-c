#include <stdio.h>

int main()
{
	int a, b;
	double c, d;

	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);

	c = ((a + b)*1.0) / 2 ;
	d = (a + b) / 2.0;
	printf("ave = %0.1f\n", c);
	printf("ave = %0.1f\n", d);
	return 0;
}