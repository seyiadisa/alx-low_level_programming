#include "main.h"

/**
  * print_last_digit - a function that prints the last digit of a number
  * @n: the number to be computed
  *
  * Return: the last digit of n
  */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;

	if (n < 0)
		digit = digit * -1;

	_putchar(digit + '0');

	return (digit);
}
