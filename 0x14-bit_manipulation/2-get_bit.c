#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: number in decimal
 * @index: index, starting from 0
 *
 * Return: the value of the bit at the index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int check;
	unsigned int max_bits = sizeof(long int) * 8;

	if (index > max_bits)
		return (-1);

	check = n >> index;
	return (check & 1);
}
