// n!
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	int i = 0;
	int result = 1;
	printf("Please enter any interger:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		result *= i;
	}
	printf("The result of %d! is %d", n, result);
	return 0;
}