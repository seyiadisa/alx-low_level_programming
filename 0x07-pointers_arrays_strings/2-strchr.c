#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string to search
 * @c: character to locate
 *
 * Return: pointer to the first occurence of @c; NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;

	if (*s == '\0')
		return (NULL);

	return (s);
}
