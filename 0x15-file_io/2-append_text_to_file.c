#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: name of file
 * @text_content: string to be added to EOF
 *
 * Return: 1 on success, otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byteWritten;
	ssize_t len;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		byteWritten = write(fd, text_content, len);

		if (byteWritten == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
