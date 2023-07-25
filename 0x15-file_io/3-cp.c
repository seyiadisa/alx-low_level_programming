#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFSIZE 1024

void cp(char *file_from, char *file_to);

/**
 * main - main function
 * @ac: number of program arguments
 * @av: array containing program arguments
 *
 *	Return: 0 if program runs successfully
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp(av[1], av[2]);

	return (0);
}

/**
 * cp - a program that copies the content of a file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
 */
void cp(char *file_from, char *file_to)
{
	int fd1, fd2;
	char buf[BUFSIZE];
	ssize_t rbytes, wbytes;

	fd1 = open(file_from, O_RDONLY);
	fd2 = open(file_to, O_CREAT | O_TRUNC | O_WRONLY,
			   S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	rbytes = read(fd1, buf, BUFSIZE);

	if (fd1 == -1 || rbytes == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	while (rbytes != 0)
	{
		wbytes = write(fd2, buf, rbytes);
		rbytes = read(fd1, buf, BUFSIZE);
	}

	if (fd2 == -1 || wbytes == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}

	if (close(fd1) == -1 || close(fd2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", (fd1 == -1) ? fd1 : fd2);
		exit(100);
	}
}
