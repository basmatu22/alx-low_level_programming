#include <unistd.h>

/**
 *_isalpha - checks for alphabetic character
 *@c: the character to check
 *
 *Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	/* Check if the character is a lowercase letter */
	if  (c >= 97 && c <= 122)
	return  (1);
	 /* Check if the character is an uppercase letter */
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
