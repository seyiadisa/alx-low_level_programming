#include "main.h"

/**
  * _abs - a function that computes the absolute value of an int
  * @n: the number to be checked
  *
  * Return: the absolute value of n
  */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
