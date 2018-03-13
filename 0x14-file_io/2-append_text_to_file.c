#include "holberton.h"
/**
 * append_text_to_file - appends text to an existing text file
 * @filename: name of file
 * @text_content: text to be appended
 * Return: 1 if successful, otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int writen;
	int len_append;

	len_append = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[len_append] != '\0')
		len_append++;

	writen = write(fd, text_content, len_append);
	if (writen == -1)
		return (-1);

	close(fd);

	return (1);
}
