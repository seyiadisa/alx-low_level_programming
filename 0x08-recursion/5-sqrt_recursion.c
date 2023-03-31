#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int guess = n / 2;
	int prev_guess = 0;

	int result = square_root(n, guess, prev_guess);

	if (result * result == n)
		return (result);
	else if (n == 1)
		return (1);
	else
		return (-1);
}

/**
 * square_root - computes the square root of n using Newton's method
 * The equation is x(n+1) = 0.5 * (xn + a / xn)
 * @n: represents a
 * @guess: represents x(n+1)
 * @prev_guess: represents xn
 *
 * Return: the square root of n
 */
int square_root(int n, int guess, int prev_guess)
{
	if (prev_guess - guess == 0)
	{
		return (guess);
	}
	else
	{
		prev_guess = guess;
		guess = 0.5 * (prev_guess + (n / prev_guess));
		return (square_root(n, guess, prev_guess));
	}
}
