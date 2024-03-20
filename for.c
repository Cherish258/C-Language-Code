// For
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 8)
		{
			break;
		}
		if (i == 5)
		{
			continue;
		}
		printf("%d\n", i);
	}
	
	return 0;
}