#include "main.h"

/**
  * times_table - a function that prints the 9 times table
  */
void times_table(void)
{
	int col, row, product, ten, one;

	for (col = 0; col < 10; col++)
	{
		for (row = 0; row < 10; row++)
		{
			product = col * row;
			ten = product / 10;
			one = product % 10;

			if ((product < 10) && (row != 9))
			{
				_putchar(product + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if ((product >= 10) && (row != 9))
			{
				_putchar(ten + '0');
				_putchar(one + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (product < 10)
				{
					_putchar(product + '0');
				}
				else
				{
					_putchar(ten + '0');
					_putchar(one + '0');
				}
				continue;
			}
		}
		_putchar('\n');
	}
}
