// 1!+2!+...+10!
#include <stdio.h>

int main()
{
	int i = 1;
	int j = 1;
	int result = 0;
	for (;i <= 10; i++)
	{
		j *= i;
		result += j;
	}
	printf("1!+2!+...+10!=%d\n", result);
	return 0;
}