#include <stdio.h>

int main()
{
	int gubum;
	printf("주민번호첫번째 숫자를 입력하세요");
	scanf("%d", &gubum);

	if (1 == gubum || 3 == gubum) printf("남자입니다\n");
	else if (2==gubum || 4==gubum) printf("여자입니다\n");
	else printf("누구세요?\n");

	return 0;
}