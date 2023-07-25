#include "main.h"

/**
 * create_file - function that creates a file with permissions rw-------
 *
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success; -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	size_t i = 0;
	int fd;
	ssize_t bytes_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		bytes_write = write(fd, text_content, i);
	}
	else
	{
		bytes_write = write(fd, "", i);
	}

	if (bytes_write == -1)
		return (-1);

	close(fd);

	return (1);
}
