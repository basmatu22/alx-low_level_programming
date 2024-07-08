#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: the size of the matrix (number of rows/columns)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag1_sum = 0;
	int diag2_sum = 0;

	for (i = 0; i < size; i++)
	{
	diag1_sum += a[i * size + i];
	diag2_sum += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", diag1_sum, diag2_sum);
}
