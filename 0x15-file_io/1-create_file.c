#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file to be read
 * @text_content: content to be put in the file
 * Return: the number of letters printed, or 0 if it failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int byteswritten = 0, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
		byteswritten = write(fd, text_content, len);
		if (byteswritten == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
