#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long input;

	scanf("%ld", &input);

	int count = 10000;	// 다섯 자리의 정수를 입력받는다 가정

	while (count >= 1)
	{
		printf("[%d]\n", ((int)input / count) * count);
		input = input % count;
		count = count / 10;
	}

	return 0;
}