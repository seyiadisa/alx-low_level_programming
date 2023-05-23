#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFSIZE 1024

/**
 * main - a program that copies the content of a file to another file
 * @ac: number of program arguments
 * @av: array containing program arguments
 *
 *	Return: 0 if program runs successfully
 */

int main(int ac, char *av[])
{
	int fd1, fd2;
	char buf[BUFSIZE];
	ssize_t rbytes, wbytes;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(av[1], O_RDONLY);
	rbytes = read(fd1, buf, BUFSIZE);

	if (fd1 == -1 || rbytes == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY,
			   S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	wbytes = write(fd2, buf, rbytes);

	if (fd2 == -1 || wbytes == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}

	if (close(fd1) == -1 || close(fd2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", (fd1 == -1) ? fd1 : fd2);
		exit(100);
	}

	return (0);
}
