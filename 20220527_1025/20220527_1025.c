#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long input;

	scanf("%ld", &input);

	int count = 10000;	// �ټ� �ڸ��� ������ �Է¹޴´� ����

	while (count >= 1)
	{
		printf("[%d]\n", ((int)input / count) * count);
		input = input % count;
		count = count / 10;
	}

	return 0;
}