#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - a function that creates a file.
 * @filename: name of file to be created
 * @text_content: String to be written to file
 *
 * Return: 1 (On success), otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int count = 0;
	char *buffer;
	ssize_t byteswritten;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
	if (fd == -1)
		return (-1);

	while (text_content[count] != '\0')
	{
		count++;
	}
	buffer = (char *)malloc(sizeof(char) * (count + 1));
	if (buffer == NULL)
	{
		close(fd);
		return (-1);
	}
	if (text_content != NULL)
	{
		strcpy(buffer, text_content);
		byteswritten = write(fd, buffer, count);
		if (byteswritten == -1)
		{
			free(buffer);
			close(fd);
			return (-1);
		}
	}
	free(buffer);
	close(fd);
	return (1);
}
