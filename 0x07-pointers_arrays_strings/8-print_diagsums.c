#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals of a square matrix of integers
 * @a: matrix as a 2d array
 * @size: number of rows (and columns) of square matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i + (size * i)];
	}

	for (i = 1; i <= size; i++)
	{
		sum2 += a[(size - 1) * (i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
