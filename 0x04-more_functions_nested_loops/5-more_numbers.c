#include "main.h"

/**
  * more_numbers - a function that prints 0 to 14, 10 times
  */
void more_numbers(void)
{
	int j, unit, tens;
	int i = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 14 + 1)
		{
			tens = j / 10;
			unit = j % 10;

			if (j > 9)
			{
				_putchar(tens + '0');
			}
			_putchar(unit + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}

}
