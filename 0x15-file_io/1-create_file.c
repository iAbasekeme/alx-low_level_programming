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
	ssize_t byteswritten;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[count])
		{
			count++;
		}
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
	byteswritten = write(fd, text_content, count);
	if (fd == -1 || byteswritten == -1)
		return (-1);
	close(fd);
	return (1);
}
