#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long long int a, b;
	scanf("%lld %lld", &a, &b);

	printf("%lld\n", a + b);
	printf("%lld\n", a - b);
	printf("%lld\n", a * b);
	printf("%lld\n", a / b);
	printf("%lld\n", a % b);
	printf("%.2f", (double)a / (double)b);	// long double ¾µ °æ¿ì Àß¸øµÆ´Ù°í ³ª¿È

	return 0;
}