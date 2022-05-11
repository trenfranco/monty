#include "monty.h"

/**
 * read_textfile - reads a text file and saves into buffer
 *@filename: filename
 * Return: buffer with file content
 */
char *read_textfile(char *filename)
{
	ssize_t fd, written, r;
	char *buff;

	if (filename == NULL)
		exit(EXIT_FAILURE);

	buff = malloc(1024);

	if (buff == NULL)
	{
		write(STDERR_FILENO, "Error: malloc failed\n", 21);
		exit(EXIT_FAILURE);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s", filename);
		free(buff);
		exit(EXIT_FAILURE);
	}

	r = read(fd, buff, 1024);

	if (r == -1)
	{
		free(buff);
		exit(EXIT_FAILURE);
	}

	close(fd);
	return (buff);
}
