#include "main.h"

/**
  * leet - a function that encodes a string into 1337 (leet)
  * @str: string to encode
  *
  * Return: a pointer to the encoded string
  */
char *leet(char *str)
{
	int i, j;
	char encode[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (str[i] == encode[j] ||
					str[i] - 32 == encode[j])
			{
				str[i] = j + '0';
			}
		}
	}

	return (str);
}
