#include <stdio.h>
struct mydb
{
	char flower[20];
	char color[20];
	int number;
}ilike;
int main()
{
	char a, b[3], c[] = "rx75", *d;
	int m, n[3], *p;
	double x, y[3], *z;

	printf("char %d %d %d\n",sizeof(a),sizeof(b),sizeof(c));
	printf("int %d %d\n", sizeof(m), sizeof(n));
	printf("double %d %d\n", sizeof(x), sizeof(y));
	printf("pointer %d %d %d\n", sizeof(d), sizeof(p), sizeof(z));
	printf("struct %d\n", sizeof(ilike));
	return 0;
}