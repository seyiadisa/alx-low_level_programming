#include "main.h"

/**
 * _strdup - copies a string
 * @str: string
 *
 * Return: a pointer to a newly allocated memory space containing `str`'s copy
 */
char *_strdup(char *str)
{
	char *s;
	int len = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + len))
		len++;

	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	while (i < len)
	{
		*(s + i) = *(str + i);
		i++;
	}

	*(s + ++i) = '\0';

	return (s);
}
