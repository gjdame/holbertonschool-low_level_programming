#include "holberton.h"
/**
 *
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int writen;
	int len;

	len = 0;
	while (text_content[len] != '\0')
		len++;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

		if (fd == -1)
			return (-1);

	writen = write(fd, text_content, len);
	if (writen == -1)
		return (-1);

	close (fd);

	return (1);
}
