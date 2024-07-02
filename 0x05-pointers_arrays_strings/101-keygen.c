#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;
	char password[100];
	int index = 0;
	int rand_num;

	srand(time(0));
	while (sum < 2772)
	{
	rand_num = rand() % 94 + 33;
	password[index++] = (char)rand_num;
	sum += rand_num;
	}
	password[index - 1] -= (sum - 2772);

	for (int i = 0; i < index; i++)
	_putchar(password[i]);
	_putchar('\n');

	return (0);
}
