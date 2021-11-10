#include <stdio.h>
int n = 10, m = 20;
void s1()
{
	n = 20, m = 30;
	return;
}
void s2()
{
	n = 30, m = 10;
	return;
}
int main()
{
	printf("n= %d, m= %d\n",n,m);
	s1();
	printf("n= %d, m= %d\n", n, m);
	s2();
	printf("n= %d, m= %d\n", n, m);
	return 0;
}