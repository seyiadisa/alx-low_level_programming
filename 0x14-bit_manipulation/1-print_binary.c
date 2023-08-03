#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: integer
 *
 */
void print_binary(unsigned long int n)
{
	int i = (sizeof(long int) * 8) - 1;
	unsigned long int mask;
	unsigned long int check;
	int start = 0;

	for (; i >= 0; i--)
	{
		mask = 1 << i;
		check = n & mask;
		check = check >> i;

		if (check == 1)
			start = 1;
		if (start == 1)
			_putchar(check == 1 ? '1' : '0');
		if (i == 0 && start == 0)
			_putchar('0');
	}
}
