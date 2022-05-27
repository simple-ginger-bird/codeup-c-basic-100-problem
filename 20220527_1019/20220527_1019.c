#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int years, months, days;
	scanf("%04d.%02d.%02d", &years, &months, &days);
	printf("%04d.%02d.%02d", years, months, days);

	return 0;
}