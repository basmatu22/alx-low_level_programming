#include "main.h"

/**
 *_strncat - concatenates two strings up to n bytes from src
 *@dest: destination string
 *@src: source string
 *@n: number of bytes to be used from src
 * 
 *Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;

	while (dest[dest_len])
	dest_len++;
	 while (src[i] && i < n)
	{
	dest[dest_len] = src[i];
	dest_len++;
	i++;
	}
	dest[dest_len] = '\0';

	return dest;
}
