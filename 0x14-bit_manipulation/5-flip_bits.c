#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 *	to get from one integer to another
 *
 * @n: first integer
 * @m: second integer
 *
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int check;
	int i = (sizeof(long int) * 8) - 1;

	for (; i >= 0; i--)
	{
		check = n ^ m;
		check = check >> i;

		if ((check & 1) == 1)
			count++;
	}
	return (count);
}
