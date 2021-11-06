#include <stdio.h>
void s_to_b(char c[])
{
	int cnt = -1;
	while (c[++cnt])
	{
		if (c[cnt] >= 'a' && c[cnt] <= 'z') c[cnt] -= 32;
	}
}
int main()
{
	char blog[5] = { "blog" };
	printf("%s\n",blog);
	s_to_b(blog);
	printf("%s\n",blog);
	return 0;
}