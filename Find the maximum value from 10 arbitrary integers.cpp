// Find the maximum value from 10 arbitrary integers
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//Initialize
	int arr[10] = { 0 };
	int max = 0;
	int i = 0;

	//Input
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	//Compare
	max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	//Output
	printf("max = %d", max);

	return 0;
}