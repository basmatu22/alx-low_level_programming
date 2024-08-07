#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search in.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *h, *n;

	while (*haystack != '\0')
	{
	h = haystack;
	n = needle;

	while (*n != '\0' && *haystack == *n)
	{
	haystack++;
	n++;
	}

	if (*n == '\0')
	return (h);

	haystack = h + 1;
	}

	return (NULL);
}

