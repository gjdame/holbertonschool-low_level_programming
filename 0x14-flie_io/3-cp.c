#include "holberton.h"
/**
 *
 *
 *
 */
int main(int ac, char **av)
{
	char *file_to = av[2];
	char *file_from = av[1];
	char buf[1024];
	int i;
	int fd, fd2;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(file_from, O_RDWR);
	fd2 = open(file_to, O_CREAT| O_RDWR | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from %s", av[1]);
		exit(98);
	}

	while ((i = read(fd, buf, 1024)) > 0)
	{
		write (fd2, buf, i);
		if (fd2 == -1)
		{
		dprintf(2, "Error: Can't write to %s", av[2]);
		exit(99);
		}
	}
	close (fd);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd);
		exit(100);
	}
	close (fd2);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd2);
		exit(100);
	}
	return (0);
}
