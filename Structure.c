// Structure
#include <stdio.h>

struct student
{
	char name[20];
	int age;
	float score;
};

int main()
{
	struct student a = { "Cherish258", 24, 99.9 };
	struct student* pa = &a;
	printf("Name: %s\nAge: %d\nScore: %.1f\n", pa -> name, pa -> age, pa -> score); //Struct variable.Member variable

	return 0;
}