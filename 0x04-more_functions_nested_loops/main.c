#include "main.h"


/**
 *main - Entry point for testing the print_line function.
 *Return: 0 on success
 */
int main(void)
{
	 print_line(5);  /* Expected output: _____\n */
	 print_line(0);  /* Expected output: \n */
	 print_line(-3); /* Expected output: \n */
	 print_line(10); /* Expected output: ________\n */

	  return (0);
}
