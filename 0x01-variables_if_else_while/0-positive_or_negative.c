#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - program starts here
  *
  * Return: 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d ", n);

	if (n > 0)
		printf("is positive");
	else if (n < 0)
		printf("is negative");
	else if (n == 0)
		printf("is zero");

	printf("\n");

	return (0);
}
