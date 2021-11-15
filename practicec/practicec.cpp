#include <stdio.h>
int main()
{	
	int a = 1, b = 2;
	#define MUL(n,m) n*m
	printf("곱 %d\n", MUL(a+b, a+b));
	#undef MUL

	#define MUL(n,m) (n)*(m)
	printf("곱 %d\n",MUL(a+b,a+b));
	#undef MUL
	return 0;
}