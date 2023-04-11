#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: name of the file to read
 * @letters: is the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 * otherwise it returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *text;

	text = malloc(letters);
	if (!text)
		return (0);
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(text);
		return (0);
	}
	rd = read(fd, text, letters);
	wr = write(STDOUT_FILENO, text, rd);
	close(fd);
	return (wr);
}
