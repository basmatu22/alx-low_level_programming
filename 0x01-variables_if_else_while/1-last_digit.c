#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - entry point
 *
 * Description: This program assigns a random number to the variable n each
 * time it is executed. It then prints the last digit of the number stored
 * in the variable n and indicates whether the last digit is greater than 5,
 * is 0, or is less than 6 and not 0.
 *
 * Return: 0 (success)
 */
int main(void) 
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
		printf("last digit of %i is %i and is greater than 5\n", n, digit);
	else if `(last_digit == 0)`
		 printf("last digit of %i is %i 0\n", n, digit);
	else if (digit < 6 && digit 1 - 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
	return (0);
}
