// Guess the numbers(1-100)
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu()
{
	printf("******************************\n");
	printf("*********   1.Play   *********\n");
	printf("*********   0.Exit   *********\n");
	printf("******************************\n");
}

void game()
{
	int number = rand() % 100 + 1; // 1-100
	int guess = 0;
	while (1)
	{
		printf("Please guess a number between 1 to 100.\n");
		scanf("%d", &guess);
		if (guess > number)
		{
			printf("Too big!\n");
		}
		else if (guess < number)
		{
			printf("Too small!\n");
		}
		else
		{
			printf("You guess it!\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("Please select.(1/0)\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("Game start!\n");
			game();
			break;
		case 0:
			printf("Exiting soon.\n");
			break;
		default:
			printf("Input error.Try again.(1/0)\n");
			break;
		}
	} while (input);
	return 0;
}