#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int years, months, days;
	scanf("%d.%d.%d", &years, &months, &days);
	printf("%02d-%02d-%04d", days, months, years);

	return 0;
}