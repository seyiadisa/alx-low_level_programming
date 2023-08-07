#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success; -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t i = 0;
	int fd;
	ssize_t bytes_write = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

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
		return (-1);
	}

	if (bytes_write == -1)
		return (-1);

	close(fd);

	return (1);
}
