#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: name of file
 * @text_content: string to be added to EOF
 *
 * Return: 1 (on success), otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count = 0, w;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[count])
		{
			count++;
		}
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, count);

	if (w == -1 || fd == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
