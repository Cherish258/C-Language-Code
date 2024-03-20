// Do while
#include <stdio.h>

int main()
{
	int i = 0;
	do
	{
		if (i == 8)
		{
			break;
		}
		i++;
		if (i == 5)
		{
			continue;
		}
		printf("%d\n", i);
	} while (i <= 10);
	
	return 0;
}