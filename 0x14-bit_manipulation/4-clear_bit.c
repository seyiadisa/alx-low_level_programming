#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 *
 * @n: pointer to the number
 * @index: index of the bit to turn to 1
 *
 * Return: 1 if successful; -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	mask = ~mask;

	if (n == NULL)
		return (-1);

	mask = mask << index;

	*n = *n & mask;
	return (1);
}
