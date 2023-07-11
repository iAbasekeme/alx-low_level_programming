#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of file to create
 * @text_content: string to be written
 *
 * Return: 1 on success else -1
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;
	char *buffer;
	char *cont = text_content;
	int i = 0;
	int filedescriptor;
	ssize_t writebytes;

	if (!filename)
		return (-1);
	filedescriptor = open(filename, O_CREAT | O_WRONLY | O_EXCL | O_TRUNC, S_IRUSR, S_IWUSR);
	if (filedescriptor == -1)
		return (-1);
	file = fdopen(filedescriptor, "w");

	if (!file)
		return (-1);
	buffer = (char *)malloc((strlen(cont + 1)) * sizeof(char));
	if (!buffer)
	{
		close(file);
		return (-1);
	}
	while (cont[i] != '\0')
	{
		buffer[i] = cont[i];
		i++;
	}
	buffer[i] = '\0';

	writebytes = fwrite(buffer, sizeof(char), i, file);
	fclose(file);
	free(buffer);
	if (writebytes != i)
	{
		return (-1);
	}
	return (1);
}
