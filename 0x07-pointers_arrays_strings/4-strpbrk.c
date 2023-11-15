#include "main.h"

/**
 * _strpbrk - a function that searches a string for any set of bytes
 * @s: string to search
 * @accept: substring
 *
 * Return: a pointer to the byte in s that matches one of the accept; NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s)
	{
		for (temp = accept; *temp && *temp != *s; temp++)
			;
		if (*temp == *s)
			return (s);
		s++;
	}

	return (NULL);
}