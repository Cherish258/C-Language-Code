// Find the average value from 10 any integers
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//Initialize
	int arr[10] = { 0 };
	int sum = 0;
	float avg = 0;
	int i = 0;

	//Input
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	//Compute
	sum = arr[0];
	for (i = 1; i < 10; i++)
	{
		sum = sum + arr[i];
	}
	avg = sum / 10.0;

	//Output
	printf("avg = %f", avg);

	return 0;
}