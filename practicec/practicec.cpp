#include <stdio.h>
int main()
{
	int i = 0, sum = 0;
	top:
		if (sum > 20) goto bottom;
		sum += ++i;
		if (i < 10) goto top;
	bottom:
		printf("합은 %d이다\n",sum);
	return 0;
}