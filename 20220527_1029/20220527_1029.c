#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double input;	// long double ���� �߸��� Ǯ�̶�� ����
	scanf("%lf", &input);
	printf("%.11lf", input);

	return 0;
}