#include <stdio.h>

/**
 * main - program starts here
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		j = i + 1;
		while (j < 58)
		{
			k = j + 1;
			while (k < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k++);

				if (i == 55)
					break;
				putchar(',');
				putchar(' ');
			}
			j++;
		}
	}

	putchar('\n');

	return (0);
}
