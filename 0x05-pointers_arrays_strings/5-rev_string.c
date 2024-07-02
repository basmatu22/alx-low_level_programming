#include "main.h"

/**
 *rev_string - reverses a string.
 *@s: pointer to the string to reverse.
 *
 *Return: void.
 */
void rev_string(char *s)
{
	int len = 0, i, half;

	while (*s != '\0')
	{
	len++;
	s++;
	}
	for (i = 0; i < half; i++)
	{
	char temp = *(s + i);
	*(s + i) = *(s + len - i - 1);
	*(s + len - i - 1) = temp;
	}
}
