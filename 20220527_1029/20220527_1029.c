#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double input;	// long double 쓰니 잘못된 풀이라고 나옴
	scanf("%lf", &input);
	printf("%.11lf", input);

	return 0;
}