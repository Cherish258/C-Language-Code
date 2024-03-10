// Find the sum of two integers using a function structure
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;

	printf("Please enter two integers:\n");
	scanf("%d%d", &num1, &num2);
	printf("sum = %d\n", Add(num1, num2));

	return 0;
}