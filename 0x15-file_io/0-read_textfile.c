#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: Filename to be read
 * @letters: chars to be printed
 *
 * Return: printed Output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	FILE *file;
	ssize_t totalBytesRead = 0;
	ssize_t bytesWritten;
	ssize_t readBytes;

	if (!filename)
		return (0);
	file = fopen(filename, "r");
	if (!file)
		return (0);
	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (!buffer)
	{
		fclose(file);
		return (0);
	}
	readBytes = fread(buffer, sizeof(char), letters, file);
	if (readBytes <= 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	totalBytesRead += readBytes;
	buffer[totalBytesRead] = '\0';

	bytesWritten = write(1, buffer, totalBytesRead);
	free(buffer);
	fclose(file);
	if (bytesWritten != totalBytesRead)
		return (0);
	return (totalBytesRead);
}