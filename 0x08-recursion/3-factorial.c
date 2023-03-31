#include "main.h"

/**
 * factorial - finds the factorial of a number
 * @n: integer number
 *
 * Return: int
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
