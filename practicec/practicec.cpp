#include <stdio.h>
#include <string.h>
int main()
{
	char A[] = "gundam rx79";
	char* p;

	p = strchr(A,'x');
	if (p != NULL) printf("%s\n",p);

	p = strstr(A, "rx79");
	if (p != NULL) printf("%s\n",p);

	return 0;
}