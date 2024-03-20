// Binary search
#include <stdio.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int aim = 7;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]);
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < aim)
		{
			left = mid + 1;
		}
		else if (arr[mid] > aim)
		{
			right = mid - 1;
		}
		else
		{
			printf("Find it.It's %d.\n", arr[mid]);
			break;
		}
	}
	if (left > right)
	{
		printf("Can't find it.\n");
	}
	return 0;
}