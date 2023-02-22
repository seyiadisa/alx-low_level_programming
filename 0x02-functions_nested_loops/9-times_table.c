#include "main.h"

/**
  * times_table - a function that prints the 9 times table
  */
void times_table(void)
{
	int col, row, product, ten, one;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			product = col * row;
			ten = product / 10;
			one = product % 10;

			if (col == 0)
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

			_putchar(',');
			_putchar(' ');

			if (product < 10)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar(ten + '0');
				_putchar(one + '0');
			}
		}
		_putchar('\n');
	}
}
