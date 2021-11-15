#include <stdio.h>
int main()
{	
	int i, n = 1;
	for (i = 1; i <= 5; ++i)
	{
		printf("%d ", n);
		n = n << 1;
	}
	printf("\n");
	for (i = 5; i >= 1; --i)
	{
		n = n >> 1;
		printf("%d ", n);
	}
	printf("\n");
	return 0;
}