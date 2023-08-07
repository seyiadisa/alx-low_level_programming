#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to stdout
 *
 * @filename: name of file to be read
 * @letters: number of bytes to read
 *
 * Return: number of bytes read. 0 if file cannot be opened or read,
 *  write fails or if filename is 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_write;
	char *str;

	if (filename == NULL)
		return (0);

	str = malloc(letters * sizeof(char));

	if (str == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bytes_read = read(fd, str, letters);

	if (bytes_read == -1)
		return (0);

	bytes_write = write(STDOUT_FILENO, str, letters);

	if (bytes_write < bytes_read)
		return (0);

	free(str);
	close(fd);

	return (bytes_read);
}
