#include "main.h"

/**
 * is_prime_number - checks if an integer is prime
 * @n: number to check
 *
 * Return: 1 if n is prime; otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_checker(n, 2));
}

/**
 * prime_checker - checks if an int is prime recursively
 * @n: number to check
 * @x: number to divide by
 *
 * Return: 1 if n is prime; otherwise 0
 */
int prime_checker(int n, int x)
{
	if (x == n)
		return (1);
	if (n % x == 0)
		return (0);

	return (prime_checker(n, ++x));
}
