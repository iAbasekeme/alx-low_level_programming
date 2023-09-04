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
	ssize_t byteswritten, bytesRead;
	char *buffer[100] = NULL;
	int *ptr;

	if (!filename)
		return (0);
	fd = open("filename", O_RDONLY);
	if (fd == -1)
	{
		fclose(fd);
		return (0);
	}

	*buffer = (char *)malloc(sizeof(char) * letters + 1);
	if (!buffer)
	{
		fclose(fd);
		free(buffer);
		exit(0);
	}
	bytesRead = read(fd, buffer, letters);

	if (bytesRead == -1)
	{
		free(buffer);
		fclose(fd);
		return (0);
	}
	byteswritten = write(STDOUT_FILENO, buffer, letters);

	if ((byteswritten == -1) || (byteswritten != bytesRead))
	{
		free(buffer);
		fclose(fd);
		return (0);
	}

	return (bytesRead);
}