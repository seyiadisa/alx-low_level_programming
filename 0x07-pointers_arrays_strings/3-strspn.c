#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: substring
 *
 * Return: number of bytes in the initial segment of @s
 *	containing only bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	char *temp;

	for (n = 0; *s; s++, n++)
	{
		for (temp = accept; *temp && *temp != *s; temp++)
			;
		if (!*temp)
			break;
	}

	return (n);
}
