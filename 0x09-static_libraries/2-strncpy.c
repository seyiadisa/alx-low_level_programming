#include "main.h"

/**
  * _strncpy - a function that copies a string
  * @dest: the string to be copied to
  * @src: the string to copy
  * @n: number of bytes to copy
  *
  * Return: the copied string *dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
