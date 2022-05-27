#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int hours, minutes, seconds;
	scanf("%d:%d:%d", &hours, &minutes, &seconds);
	printf("%d", minutes);

	return 0;
}