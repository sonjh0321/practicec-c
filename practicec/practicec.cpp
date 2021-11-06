#include <stdio.h>
int main()
{
	int amt, day = 0, sum = 0;
	do {
		printf("%d번째 날 쓴 용돈 = ",++day);
		scanf("%d", &amt);
		sum += amt;
	} while (day<7);

	printf("일주일간 사용한 돈은 %d원입니다\n",sum);
	return 0;
}