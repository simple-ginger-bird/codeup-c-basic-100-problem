#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char word[2001];
	fgets(word, 2000, stdin);	// 공백이 포함된 문장을
								// 키보드(stdin)으로 입력받는다
	printf("%s", word);

	return 0;
}