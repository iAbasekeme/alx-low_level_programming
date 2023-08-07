#include "main.h"

/**
 * read_textfile - a function that reads a text
 * file and prints it to the POSIX standard output.
 * @filename: name of file to be read from.
 * @letters: Numbers of letters to be printed.
 *
 * Return: Number of letters to be printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t byteWritten;
	int fd;
	ssize_t readFiles;
	char buffer[1024];

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	readFiles = read(fd, buffer, letters);

	if (readFiles == -1)
	{
		close(fd);
		return (0);
	}
	byteWritten = write(STDOUT_FILENO, buffer, readFiles);

	close(fd);
	if (byteWritten == -1 || byteWritten != readFiles)
		close(fd);
	return (0);

	return byteWritten;
}
