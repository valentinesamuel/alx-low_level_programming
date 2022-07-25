#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t byteswritten = 0, bytesread = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == 1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	bytesread = read(fd, buffer, letters);
	if (bytesread == -1)
	{
		free(buffer);
		return (0);
	}
	byteswritten = write(STDOUT_FILENO, buffer, bytesread);
	if (byteswritten == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (bytesread);
}
