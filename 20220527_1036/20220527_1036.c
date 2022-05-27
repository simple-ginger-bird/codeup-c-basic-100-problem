#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char input;
	scanf("%c", &input);	// 문자를 입력받고, ASCII 값으로 저장
	printf("%d", input);	// 10진수로 출력

	return 0;
}