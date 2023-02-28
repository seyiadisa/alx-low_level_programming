#include "main.h"

/**
  * _strcpy - copies the string pointed to by src, to buffer pointed by dest
  * @src: source pointer
  * @dest: destination pointer
  *
  * Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (src[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	dest[i + 1] = '\0';

	return (dest);
}
