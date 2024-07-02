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
	int i;

	srand(time(0));

	while (sum < 2772)
	{
	rand_num = rand() % 94 + 33;
	password[index++] = (char)rand_num;
	sum += rand_num;
	}
	password[index - 1] -= (sum - 2772);
	i = 0;
	while (i < index)
	{
	_putchar(password[i]);
	i++;
	}
	_putchar('\n');

	return (0);
}
