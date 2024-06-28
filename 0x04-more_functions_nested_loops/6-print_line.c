#include "main.h"

/**
 *print_line - Prints a line of underscores followed by a newline.
 *@n: Number of times the character '_' should be printed
 */
void print_line(int n)
{
	int InChr;

	if (n <= 0)
	_putchar('\n');
	else
	{
	for (InChr = 1; InChr <= n; InChr++)
		_putchar('_');
	 putchar('\n');

	}
}
