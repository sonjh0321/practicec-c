#include <stdio.h>

int main()
{
	char a = 'A';
	char b[5] = "ABCD";
	int c = 100;
	double d = 123.4567;

	printf("%5c %10s\n", a,b);
	printf("%-5c %-10s\n", a, b);
	printf("%5d %-5d\n", c, c);
	printf("%0.3f\n", d);

	return 0;
}