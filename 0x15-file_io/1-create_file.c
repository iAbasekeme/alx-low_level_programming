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
	int fd;
	ssize_t writebytes;
	ssize_t len;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_EXCL | O_TRUNC, 0600);
	;
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		writebytes = write(fd, text_content, len);

		if (writebytes == -1 || writebytes != len)
		{
			return (-1);
			close(fd);
		}
	}
	return (1);
}
