#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The pointer to be set.
 * @to: The string to set the pointer to.
 *
 * Description: This function assigns the value of the string
 * pointed to by `to` to the pointer `s`. It dynamically allocates
 * memory for `s` to hold a copy of `to` and sets `s` to point to
 * this new memory.
 */
void set_string(char **s, char *to)
{
	char *new_str;
	int len = 0;

	while (to[len] != '\0')
	{
	len++;
	}
	new_str = (char *)ma11oc((len + 1) * sizeof(char));
	if (new_str == NULL)
	{
	return;
	}

	for (i = 0; i <= len; i++)
	{
	new_str[i] = to[i];
	}
	*s = new_str;
}
