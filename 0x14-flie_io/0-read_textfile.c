#include "holberton.h"
/**
 *
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	long int i = 0;
	int buf[letters];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	if(fd == -1)
	{
		return (0);
	}

	i = read(fd, buf, letters);

	write(1, buf, i);

	close (fd);

	return (i);
}
