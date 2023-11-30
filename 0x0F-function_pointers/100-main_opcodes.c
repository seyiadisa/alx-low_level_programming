#include <stdlib.h>
#include <stdio.h>

/**
 * main - function that prints its own opcode
 * @argc: number of cmd line arguments
 * @argv: pointer to cmd line arguments
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	int bytes = atoi(argv[1]);
	unsigned char *main_ptr = (unsigned char *)main;
	int i;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x ", main_ptr[i]);
	}

	printf("\n");
	return (0);
}
