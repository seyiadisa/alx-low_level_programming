#include <stdio.h>

/**
  * main - program starts here
  *
  * Return: 0
  */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);

		if (i == 57)
			break;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
