#include <stdio.h>
struct point
{
	int kor;
	int eng;
	int mat;
}my_point;
int total(point* ppoint)
{
	return ppoint->kor + ppoint->eng + ppoint->mat;
}
int main()
{
	my_point.kor = 85;
	my_point.eng = 70;
	my_point.mat = 100;
	printf("총점 %d\n", total(&my_point));
	return 0;
}