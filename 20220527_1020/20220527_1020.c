#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long front, back;
	scanf("%ld-%ld", &front, &back);
	printf("%06ld%07ld", front, back);

	return 0;
}