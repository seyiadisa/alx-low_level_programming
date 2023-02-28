#include "main.h"

/**
  * puts_half - prints half of a string, followed by a new line
  * @str: string to check
  */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int n;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
