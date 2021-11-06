#include <stdio.h>
int main()
{
	int gubum;

	printf("숫자를 입력하세요");
	scanf("%d", &gubum);
	switch (gubum)
	{
		case 1:
		case 3:
			printf("남자입니다\n");
			break;
		case 2:
		case 4:
			printf("여자입니다\n");
			break;
		default:
			printf("없는 유형입니다\n");
	}
	return 0;
}