#include "main.h"

/**
 *_atoi - converts a string to an integer.
 *@s: pointer to the string to convert.
 *
 *Return: The integer value of the converted string.
 *        0 if no numbers were found in the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;


	while (*s)
	{
	if (*s == '-')
	sign *= -1;
	else if (*s >= '0' && *s <= '9')
	{
	num = (num * 10) + (*s - '0');
	}
	else if (num > 0)
	break;
	s++;
	}

	return (result * sign);
}
