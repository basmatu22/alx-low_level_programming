#include "main.h"

/**
 *main - check the code
 *
 *Return: Always 0.
 */
void print_alphabet(void)
{
	 char ch;

	  for (ch = 'a'; ch <= 'z'; ch++)
	  {
		   _putchar(ch);
	  }
	   _putchar('\n');
}
/**
 *main - Entry point
 *
 * Description: calls the print_alphabet function
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
