// Prime number in 100~200
#include <stdio.h>
#include <math.h>

int main()
{
	int i = 101;
	int j = 0;
	int count = 0;
	for (;i < 200; i += 2)
	{
		for (j = 2;j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d\n", count);
	return 0;
}