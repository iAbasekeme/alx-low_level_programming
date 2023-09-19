#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - A function that reads a
 * text file and prints it to the POSIX standard output.
 * @filename: file to read from.
 * @letters: number of letters to write to.
 *
 * Return: Number of letters to be read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t t;
	char *buffer;
	ssize_t w;

	fd = open(filename, O_RDONLY);
	if (!filename)
		return (0);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (t);
}
