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
	size_t i = 0;
	char buffer[letters];

	if (!filename)
		return (0);
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	ssize_t readFiles = read(fd, buffer, letters);

	if (readFiles == -1)
	{
		close(fd);
		return (0);
	}
	ssize_t byteWritten = write(STDOUT_FILENO, buffer, readFiles);

	close(fd);
	if (byteWritten == -1 || byteWritten != readFiles)
		close(fd);
	return (0);

	return byteWritten;
}
