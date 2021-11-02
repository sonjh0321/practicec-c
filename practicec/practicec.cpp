#include <stdio.h>

int main()
{
	char a = 'A';
	char b[5] = "ABCD";
	int c = 100;
	double d = 123.456;

	printf("%c %s \n", a, b); //%c라는 부분에 a가 들어가고 %s에 b가 들어간다
	printf("%d %f \n",c, d);
	printf("%e %E \n", d, d);
	return 0;
}