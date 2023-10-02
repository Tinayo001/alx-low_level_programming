#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <sys/types.h>
/**
 * read_textfile - functions that reads a text file and prints it to the
 * POSIX standard output.
 * @letters: number of letters printed
 * @filename: filename (string pointer)
 * Return: number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	nrd = read(fd, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);
	{
		close(fd);
		free(buff);
	}

	return (nwr);
}
