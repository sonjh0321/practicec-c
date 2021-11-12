#include <stdio.h>
#include <limits.h>
typedef struct mydb
{
	int num1;
	int num2;
}ilike;
int main()
{
	ilike A;
	typedef unsigned int ui;
	A.num1 = 3;
	A.num2 = 5;
	printf("%d %d\n",A.num1,A.num2);
	ui max = INT_MAX + INT_MAX + 1;
	printf("%u\n",max);
	return 0;
}