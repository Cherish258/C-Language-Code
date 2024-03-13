// Ifelse
#include <stdio.h>

int main()
{
	// Age range judgment
	int age = 24;
	if (age < 18) 
	{
		printf("Juvenile\n");
	}
	else if (age >= 18 && age < 35)
	{
		printf("Youth\n");
	}
	else if (age >= 35 && age < 40)
	{
		printf("Prime\n");
	}
	else if (age >= 40 && age < 60)
	{
		printf("Midlife\n");
	}
	else if (age >= 60 && age < 100)
	{
		printf("Old age\n");
	}
	else
	{
		printf("God\n");
	}

	// Odd judgment
	int number = 2024;
	if (number % 2 == 0)
	{
		printf("%d is't a odd.\n", number);
	}
	else
	{
		printf("%d is a odd.\n", number);
	}

	// Outputs all odd numbers up to 100
	int i = 1;
	while (i < 100)
	{
		if (i % 2 == 1)
		{
			printf("%d\n", i);
		}
		i++;
	}

	return 0;
}