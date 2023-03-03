#include "main.h"

/**
  * _strcat - a function that concatenates two strings
  * @dest: string to be appended to
  * @src: string to append
  *
  * Return: pointer to the resulting string
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 1;

	while (dest[i] != '\0')
		i++;

	dest[i] = src[0];
	i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i + 1] = '\0';

	return (dest);
}
