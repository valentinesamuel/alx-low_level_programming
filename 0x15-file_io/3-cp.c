#include "main.h"
#include <stdio.h>

/**
 * errorMsg - Print error message
 * @exitCode: exit code to stop
 * @msg: the error message to be printed
 * @fileName: the name of the file
 * Return: nothing
 * Description: error message abstraction
 */
void errorMsg(int exitCode, const char *msg, const char *fileName)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, fileName);
	exit(exitCode);
}

/**
 * main: entry point
 * @argc: argument count
 * @argv: array of argument
 * Return: 0
*/
int main(int argc, char **argv)
{
	int fd_from, fd_to, readfile, writefile;
	int bytesinprocess = 1024, close_from, close_to;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1],	O_RDONLY);
	if (fd_from == -1)
		errorMsg(98, "Error: Can't read from file", argv[1]);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		errorMsg(99, "Error: Can't write to", argv[2]);
	readfile = read(fd_from, buffer, bytesinprocess);
	while (readfile > 0)
	{
		writefile = write(fd_to, buffer, readfile);
		if (writefile == -1)
			errorMsg(99, "Error: Can't write to", argv[2]);
		readfile = read(fd_from, buffer, bytesinprocess);
	}
	if (readfile == -1)
		errorMsg(98, "Error: Can't read from file", argv[1]);
	close_from = close(fd_from);
	if (close_from == -1)
		errorMsg(100, "Error: Can't close fd", argv[1]);
	close_to = close(fd_to);
	if (close_to == -1)
		errorMsg(100, "Error: Can't close fd", argv[2]);
	return (0);
}
