#include "holberton.h"
/**
 * create_file - creates a file and fills it with text content
 * @filename: name of file created
 * @text_content: text of file created
 * Return: 1 if success
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

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		if (fd == -1)
			return (-1);

	writen = write(fd, text_content, len);
	if (writen == -1)
		return (-1);

	close(fd);

	return (1);
}
