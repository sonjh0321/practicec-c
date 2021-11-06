#include <stdio.h>
#include <ctype.h>
int main()
{
	char exp[7] = { "Gundam" };
	int i;

	printf("변경 전 %s\n",exp);
	for (i = 0; i < 6; ++i)
	{
		if (islower(exp[i])) exp[i] = toupper(exp[i]);
		else if (isupper(exp[i])) exp[i] = tolower(exp[i]);
	}
	printf("변경 후 %s",exp);

	return 0;
}