#include "main.h"

/**
  * _strncat - a function that concatenates two strings
  * @dest: string to be appended to
  * @src: string to append
  * @n: number of characters (bytes) to copy
  *
  * Return: pointer to the resulting string
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 1;

	while (dest[i] != '\0')
		i++;

	if (n > 0)
	{
		dest[i] = src[0];
		i++;
	}

	while (j < n)
	{
		if (src[j] == '\0')
			break;

		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i + 1] = '\0';

	return (dest);
}
