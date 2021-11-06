#include <stdio.h>
int main()
{
	char week[7][10] = {"sunday","monday", "tuesday", "wednesday", "thursday",
		"friday", "saturday"};
	int i,j;
	for (i = 0; i < 7; ++i)
	{
		for (j = 0; j < 10; ++j)printf("%c", week[i][j]);
		printf("\n");
	}
		return 0;
}