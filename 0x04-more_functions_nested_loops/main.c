#include "main.h"
#include <stdio.h>


int main(void)
{
	int a = 10;
	int b = 20;
	int result;

	result = mul(a, b);
	printf("Multiplication of %d and %d is: %d\n", a, b, result);

	return 0;
}
