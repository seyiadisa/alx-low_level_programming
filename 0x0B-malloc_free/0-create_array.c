#include "main.h"

/**
 * create_array - creates an array of chars, and initialized it with
 *	a specific char
 * @size: size of array
 * @c: char to initialize array
 *
 * Return: pointer to created array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(size * sizeof(char));

		for (i = 0; i < size; i++)
			*(ptr + i) = c;
	}

	return (ptr);
}
