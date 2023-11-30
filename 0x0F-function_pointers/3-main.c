#include "3-calc.h"

/**
 * main - program starts here
 *
 * @argc: number of command line arguments
 * @argv: pointer to command line arguments passed when calling the program
 *
 * Return: 0 for success; something else otherwise
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strchr("+-*/%", argv[2][0]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (strchr("/%", argv[2][0]) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
