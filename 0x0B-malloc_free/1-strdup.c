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

	while (*(str + len++))
		;

	if (str == NULL)
		return (NULL);

	s = malloc(len * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < len)
		{
			*(s + i) = *(str + i);
			i++;
		}
	}
	return (s);
}
