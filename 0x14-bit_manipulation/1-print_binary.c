#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: integer
 *
 */
void print_binary(unsigned long int n)
{
	unsigned int pow = 1;
	int len = 0;
	unsigned int val;

	if (n <= 0)
	{
		_putchar(0 + '0');
		return;
	}

	while (n != pow && n >= pow * 2)
	{
		pow *= 2;
		len++;
	}

	for (val = n; len >= 0; len--, pow *= 0.5)
	{
		if (val >= pow)
		{
			val -= pow;
			_putchar(1 + '0');
		}
		else
		{
			_putchar(0 + '0');
		}
	}
}
