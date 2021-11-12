#include <stdio.h>
void swap(int *x, int *y)
{
	int t;
	t = *x, * x = *y, * y = t;
	return;
}
int main()
{
	int m = 10, n = 20;
	printf("m=%d, n= %d\n",m,n);
	swap(&m, &n);
	printf("m=%d, n=%d\n",m,n);
	return 0;
}