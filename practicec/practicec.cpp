#include <stdio.h>

int main()
{
	char a = 'A';
	char b = 'a';
	int c = 10;
	
	printf("대문자 A의 아스키코드값 %d\n", a);
	printf("소문자 a의 아스키코드값 %d\n", b);
	printf("10진수 %d을 8진수로 표현하면 %o\n", c,c);
	printf("10진수 %d을 10진수로 표현하면 %x\n", c, c);
	printf("10진수 %d을 16진수로 표현하면 %X\n", c,c);

	return 0;
}