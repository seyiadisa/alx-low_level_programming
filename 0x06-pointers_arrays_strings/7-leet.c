#include "main.h"

/**
  * leet - a function that encodes a string into 1337 (leet)
  * @str: string to encode
  *
  * Return: encoded string
  */
char *leet(char *str)
{
	int i, j;
	int len = 0;
	char letters[5] = {'a', 'e', 'o', 't', 'l'};
	int encode[5] = {4, 3, 0, 7, 1};

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == letters[j] ||
					str[i] == letters[j] - 32)
			{
				str[i] = encode[j] + '0';
			}
		}
	}

	return (str);
}
