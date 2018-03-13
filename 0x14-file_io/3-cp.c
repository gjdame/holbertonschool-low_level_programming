#include "holberton.h"
/**
 * main - copies contents of one file to another
 * @ac: num of arguments, must be exactly 3
 * @av: file names
 * Return: 0
 */
int main(int ac, char **av)
{
	char *file_to = av[2];
	char *file_from = av[1];
	char *buf;
	int i;
	int fd, fd2;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(file_from, O_RDONLY);
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s", av[1]);
		exit(98);
	}

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", av[2]);
		exit(99);
	}

	while ((i = read(fd, buf, 1024)) > 0)
	{
		write(fd2, buf, i);
		if (fd2 == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", av[2]);
		free(buf);
		exit(99);
		}
	}
	close(fd);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		free(buf);
		exit(100);
	}
	close(fd2);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
		free(buf);
		exit(100);
	}
	free(buf);
	return (0);
}
