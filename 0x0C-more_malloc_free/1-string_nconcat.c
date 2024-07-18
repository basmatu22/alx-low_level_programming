#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate to s1.
 *
 * Return: A pointer to the newly allocated space in memory containing s1,
 *         followed by the first n bytes of s2, and null terminated.
 *         If the function fails, it should return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int i, j, len_s1 = 0, len_s2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len_s1] != '\0')
len_s1++;
while (s2[len_s2] != '\0')
len_s2++;

if (n > len_s2)
n = len_s2;

concat = malloc(sizeof(char) * (len_s1 + n + 1));
if (concat == NULL)
return (NULL);

for (i = 0; i < len_s1; i++)
concat[i] = s1[i];
for (j = 0; j < n; j++, i++)
concat[i] = s2[j];

concat[i] = '\0';

return (concat);
}

