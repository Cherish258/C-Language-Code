// Leap years in 1000~2000
#include <stdio.h>

int main()
{
	int i = 1000;
	int count = 0;
	for (;i <= 2000;i += 4)
	{
		if ((i % 100 != 0) || (i % 400 == 0))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d", count);
	return 0;
}