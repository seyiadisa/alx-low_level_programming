#include <stdio.h>

/**
 * main - program starts here
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j++);

			if (i == 56)
				break;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
