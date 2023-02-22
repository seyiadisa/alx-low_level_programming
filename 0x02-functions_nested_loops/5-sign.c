#include "main.h"

/**
  * print_sign - a function that prints the sign of a number
  * @n: The number to be checked
  *
  * Return: 1 if number is positive, 0 if it is zero, -1 if negative
  */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
