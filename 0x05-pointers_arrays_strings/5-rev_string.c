#include "main.h"

/**
  * rev_string - function that reverses a string
  * @s: string to be reversed
  */
void rev_string(char *s)
{
	char temp;
	int i = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
