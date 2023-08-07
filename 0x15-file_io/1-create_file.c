#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: Name of file.
 * @text_content: Null terminated string
 *
 * Return 1 on success otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t byteWritten;
    ssize_t len;

    if (!filename)
        return (-1);
    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

    if (fd == -1)
        return (-1);
    if (text_content != NULL)
    {
        len = strlen(text_content);
        byteWritten = write(fd, text_content, len);
        if (byteWritten == -1)
        {
            close(fd);
            return -1;
        }
    }
    close(fd);
    return (1);
}
