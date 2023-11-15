#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: byte to fill in memory
 * @n: number of bytes in memory to fill
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
