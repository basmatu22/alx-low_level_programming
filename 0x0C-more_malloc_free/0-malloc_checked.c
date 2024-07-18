#include <stdlib.h>

/**
 * malloc_checked - Allocates
 *memory using malloc and checks if allocation was successful.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory
 *If malloc fails, the function causes
 *normal process termination with status value 98.
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
	exit(98);
}

return (ptr);
}
