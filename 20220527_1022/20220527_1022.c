#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char word[2001];
	fgets(word, 2000, stdin);	// ������ ���Ե� ������
								// Ű����(stdin)���� �Է¹޴´�
	printf("%s", word);

	return 0;
}