#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: pointer to an array of 8 elements
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	int arrsize = 8;

	for (i = 0; i < arrsize; i++)
	{
		for (j = 0; j < arrsize; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
