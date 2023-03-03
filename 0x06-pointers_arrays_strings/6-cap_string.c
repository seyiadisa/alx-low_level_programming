#include "main.h"

/**
  * cap_string - a function that capitalizes all words of a string
  * @str: string to capitalize
  *
  * Return: capitalized string
  */
char *cap_string(char *str)
{
	int i, j;
	int len = 0;
	char sep[13] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}',
		'\n', ' ', '\t'};

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if ((i == 0) && str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
			continue;
		}

		for (j = 0; j < 13; j++)
		{

			if ((str[i - 1] == sep[j]) && str[i] >= 97
					&& str[i] <= 122)
			{
				str[i] -= 32;
			}
		}
	}

	return (str);
}
