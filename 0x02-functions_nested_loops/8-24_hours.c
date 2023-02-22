#include "main.h"

/**
  * jack_bauer - a function that prints every minute from 00:00 to 23:59
  */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if ((i < 10) || (j < 10))
			{
				_putchar('0');
			}
			_putchar(i + '0');
			_putchar(':');
			_putchar(j + '0');
			_putchar('\n');
		}
	}
}
