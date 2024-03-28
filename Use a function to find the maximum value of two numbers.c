// Use a function to find the maximum value of two numbers
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int max(int x, int y)
{
	return x > y ? x : y;
}

void change(int* x, int* y)
{
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	printf("%d\n", max(a, b));
	change(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}