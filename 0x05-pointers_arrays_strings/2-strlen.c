#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: string to check
  *
  * Return: length of string s
  */
int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	return (len);
}
