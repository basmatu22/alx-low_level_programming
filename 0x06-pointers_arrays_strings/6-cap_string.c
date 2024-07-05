#include "main.h"

/**
 *cap_string - capitalizes all words of a string
 *@str: the string to be capitalized
 *
 *Return: the pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
	str[0] = str[0] - ('a' - 'A');
	}

	while (str[i] != '\0')
	{
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == ',' || str[i] == ';' || str[i] == '.' ||
	str[i] == '!' || str[i] == '?' || str[i] == '"' ||
	str[i] == '(' || str[i] == ')' || str[i] == '{' ||
	str[i] == '}')
	{
	if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
	{
	str[i + 1] = str[i + 1] - ('a' - 'A');
	}
	}
	i++;
	}

	return (str);
}
