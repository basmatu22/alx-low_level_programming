#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *
 *Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	    int c = 0, c2 = 0;

	while (dest[c])
	c++;
	while (src[c2])
	{
		dest[c] = src[c2];
		c++;
		c2++;
	}
	dest[c] = '\0';
	return (dest);
}
