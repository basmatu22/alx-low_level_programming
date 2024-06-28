#include "main.h"
#include <stdio.h>


int main(void)
{
	 char c1 = 'A';
	 char c2 = 'a';
	 char c3 = 'Z';
	 char c4 = 'z';
	 char c5 = '1';

	  printf("%c: %d\n", c1, _isupper(c1));
	  printf("%c: %d\n", c2, _isupper(c2));
	  printf("%c: %d\n", c3, _isupper(c3));
	  printf("%c: %d\n", c4, _isupper(c4));
	  printf("%c: %d\n", c5, _isupper(c5));

	  return 0;
}
