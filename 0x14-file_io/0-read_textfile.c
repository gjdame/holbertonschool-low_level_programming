#include "holberton.h"
/**
 * read_textfile - reads text of input file and outputs to standard output
 * Only prints up to buffer size
 * @filename: name of txt file
 * @letters: num of letters to print
 * Return: num of chars printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	long int i = 0;
	long int n = 0;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
		if (fd == -1)
			return (0);

		buf = malloc(sizeof(char) * letters);
		if (buf == NULL)
		{
			close(fd);
			return (0);
		}

	i = read(fd, buf, letters);
	if (i == -1)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';

	n = write(STDOUT_FILENO, buf, i);
	if (n == -1)
	{
		free(buf);
		return (0);
	}

	close(fd);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (i);
}
