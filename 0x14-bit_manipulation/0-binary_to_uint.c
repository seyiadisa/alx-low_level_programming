#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number as a string
 *
 * Return: converted number, or 0 if there is one or more chars that is not
 *	0 or 1 or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{

		if (b[i] != '1' && b[i] != '0')
			return (0);

		sum = (sum * 2) + (b[i] - '0');
	}

	return (sum);
}
