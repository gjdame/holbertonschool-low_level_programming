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
	int len_original;

	len_append = 0;
	len_original = 0;

	while (filename[len_original] != '\0')
		len_original++;

	while (text_content[len_append] != '\0')
		len_append++;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR, 0600);
	if (fd == -1)
		return (-1);

	writen = write(fd, text_content, len_append);
	if (writen == -1)
		return (-1);

	close(fd);

	return (1);
}
