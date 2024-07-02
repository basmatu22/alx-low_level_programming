#include "main.h"


/**
 *_strcpy - copies the string pointed to
 *          by src to the buffer pointed to by dest
 *@dest: destination buffer.
 *@src: source string.
 *
 *Return: A pointer to the destination `dest`.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
	dest[i] = *src;
	i++;
	src++;
	}
	dest[i] = '\0';
	return (dest);
}
