#include "main.h"

/**
  * _islower - checks if a letter is lowercase
  * @c: The number to be checked
  *
  * Return: 1 if lowercase; else 0
  */
int _islower(int c)
{
	if (c >= 96 && c <= 122)
		return (1);
	else
		return (0);
}
