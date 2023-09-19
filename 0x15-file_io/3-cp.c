#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
/**
 * main - a program that copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument vector
 *
 *  Return: 0 on (success)
 */
#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
	int ff_open, ft_open;
	ssize_t file_read, file_write;
	char buffer[BUFFER_SIZE];
	const char *file_from;
	const char *file_to;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	ff_open = open(file_from, O_RDONLY);
	if (ff_open == -1)
	{
		fprintf(stderr, "Can't read from file %s\n", file_from);
		exit(98);
	}
	ft_open = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 664);
	if (ft_open == -1)
	{
		fprintf(stderr, "Can't write to %s", file_to);
		close(ft_open);
		exit(99);
	}
	while ((file_read = read(ff_open, buffer, BUFFER_SIZE)) > 0)
	{
		file_write = write(ft_open, buffer, file_read);
	}

	if (file_read == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", file_from);
		close(ff_open);
		close(ft_open);
		exit(98);
	}
	if (file_write == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", file_to);
		close(ft_open);
		close(ft_open);
		exit(99);
	}
	if ((close(ft_open) == 0 || close(ff_open)) == 0)
	{
		fprintf(stderr, "Error: Can't close %d", errno);
		return (100);
	}
	close(ft_open);
	close(ff_open);

	return (0);
}