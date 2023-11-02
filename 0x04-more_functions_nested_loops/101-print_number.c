#include "main.h"

/**
 * print_number - function to print an integer
 * @n: int to print
 */
void print_number(int n)
{
	int i, pow;
	int num_of_digits = 1;
	int temp = n;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	while ((temp / 10) != 0)
	{
		temp = temp / 10;
		num_of_digits++;
	}

	for (i = 0; i < num_of_digits; i++)
	{
		temp = n;
		pow = 1;

		while (pow < num_of_digits - i)
		{
			temp = temp / 10;
			pow++;
		}

		_putchar((temp % 10) + '0');
	}
}
