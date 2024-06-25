#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *                        followed by a new line.
 */
void print_alphabet_x10(void)
{
	int line, ch;

	/* Loop to print the alphabet 10 times */
	for (line = 0; line <= 9; line++)
	{
		/* Loop to print each letter of the alphabet */
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		  _putchar('\n');
	}
}

