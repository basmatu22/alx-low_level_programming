#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 *@n: the integer to compute absolute value for
 *
 *Return: absolute value of n
 *
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
