#include "main.h"

/**
 * append_text_to_file - A function that appends text
 * at the end of the file
 * @filename: Name of the file
 * @text_content: text to be appended
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);
	file = fdopen(fd, "a");
	if (file == NULL)
	{
		close(fd);
		return (-1);
	}

	if (text_content != NULL)
	{
		fprintf(file, "%s", text_content);
		fclose(file);
	}
	else
	{
		fclose(file);
		return (-1);
	}

	return (1);
}
