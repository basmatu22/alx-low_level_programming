#include "main.h"

int main(void)
{
	char s[10] = "Hello";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);

	return (0);
}
