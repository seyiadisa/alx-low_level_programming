#include <stdio.h>

/**
  * prime_checker - checks if a num is prime
  * @n: number to be checked
  *
  * Return: 1 if prime, 0 if not
  */
int prime_checker(long n)
{
	int i;
	int is_prime = 1;

	if ((n == 0) || (n == 1))
		is_prime = 0;

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			is_prime = 0;
			break;
		}
	}

	return (is_prime);
}
/**
  * main - the program starts here
  *
  * Return: 0 if successful
  */
int main(void)
{
	long num = 121298;/*612852475143;*/
	long i = 1;
	long prime_factor = 0;
	int is_prime;

	while ((i <= num / 2))
	{
		is_prime = prime_checker(i);

		if ((is_prime == 1) && (num % i == 0))
			prime_factor = i;

		printf("%ld ", i);
		i += 2;
	}

	printf("%ld\n", prime_factor);
	return (0);
}
