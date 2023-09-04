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
	ssize_t byteswritten;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		byteswritten = write(fd, text_content, strlen(text_content));
		if (byteswritten == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
