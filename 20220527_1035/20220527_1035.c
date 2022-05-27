#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input;
	scanf("%x", &input);	// 16진수로 입력
	printf("%o", input);	// 8진수로 출력

	return 0;
}