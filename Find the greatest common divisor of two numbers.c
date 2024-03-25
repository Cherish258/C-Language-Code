// Find the greatest common divisor of two numbers
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	// Input
	scanf("%d%d", &a, &b);
	int i = a < b ? a : b;
	// Method 1
	for (;i > 0;i--)
	{
		if ((a % i) == 0 && (b % i) == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	// Method 2
	int t = 0;
	while (t = a % b)
	{
		a = b;
		b = t;
	}
	printf("%d\n", b);
	return 0;
}